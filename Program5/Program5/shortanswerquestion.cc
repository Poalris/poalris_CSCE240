// Copyright 2024 temmons

#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"question.h"
#include"shortanswerquestion.h"

namespace csce240_program5 {
ShortAnswerQuestion::ShortAnswerQuestion(string q, string a) {
    Question::SetQuestion(q);
    sanswer_ = a;
  }


  void ShortAnswerQuestion::SetShortAnswer(string sa) {
    sanswer_ = sa;
  }

  void ShortAnswerQuestion::Print(bool b) const {
    Question::Print();
    if (b) {
      cout << "Correct Answer: " << GetShortAnswer() << endl;
    }
  }
}  // namespace csce240_program5
