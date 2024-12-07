// Copyright 2024 temmons

#ifndef _SHORTANSWERQUESTION_H_
#define _SHORTANSWERQUESTION_H_

#include<string>
using std::string;
#include<iostream>
#include"question.h"

namespace csce240_program5 {

// ShortAnswerQuestion should be a child of the Question class

// The class should have a private string data member that holds the correct
// answer to the question. Add an accessor and mutator function for this data
// member.

// Create an explicit constructor that allows the question and answer to be
// initialized when an object is instantiated. The question and answer
// parameters should have default arguments of "?" and "", respectively.

// Add a Print function that takes a bool parameter: void Print(bool) const;
// This fuction should create 1 or 2 lines of output to the standard output
// device, using cout.
// The first line of output should be "Question: " followed by the value of
// the question data member (inherited from the Question class).
// If the Print function's argument is true, it should output a second line
// that is "Correct Answer: " followed by the value of the correct answer
// private data member.
// See testsa.cc for example function calls and /output/correctsa.txt for the
// expected output for those function calls.

class ShortAnswerQuestion : public Question {
 public:
  explicit ShortAnswerQuestion(string q = "?",  string a = "");

  string GetShortAnswer() const { return sanswer_; }
  void SetShortAnswer(string sa);

  void Print(bool b) const;

 private:
  string sanswer_;
};

}  // namespace csce240_program5

#endif  // _SHORTANSWERQUESTION_H_
