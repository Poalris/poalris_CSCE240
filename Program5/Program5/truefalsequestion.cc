// Copyright 2024 temmons

#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

#include"truefalsequestion.h"

namespace csce240_program5 {
  TrueFalseQuestion::TrueFalseQuestion(string q, bool a) {
    Question::SetQuestion(q);
    tfanswer_ = a;
  }


  void TrueFalseQuestion::SetTFAnswer(bool tf) {
    tfanswer_ = tf;
  }

  void TrueFalseQuestion::Print(bool b) const {
    Question::Print();
    if (b) {
      cout << "Correct Answer: " << (tfanswer_ ? "true" : "false") << endl;
    }
  }
}  // namespace csce240_program5

