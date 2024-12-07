// Copyright 2024 temmons

#include<iostream>
using std::endl;
using std::cout;
#include<string>
using std::string;
#include"question.h"
#include"multiplechoicequestion.h"

namespace csce240_program5 {
  MultipleChoiceQuestion::MultipleChoiceQuestion(string q, int n,
                                                 string * aptr, bool * cptr) {
    Question::SetQuestion(q);
    mc_numbers_ = n;
    mc_ = nullptr;
    is_it_correct_ = nullptr;
    SetAnswerChoices(mc_numbers_, aptr, cptr);
  }

  MultipleChoiceQuestion::MultipleChoiceQuestion(const MultipleChoiceQuestion& mcq) :
                                                    mc_numbers_(mcq.mc_numbers_) {
    Question::SetQuestion(mcq.GetQuestion());
    if ( mc_numbers_ >= 0 ) {
      if ( mc_numbers_ == 0 ) {
        mc_ = nullptr;
        is_it_correct_ = nullptr;
      } else {
        mc_ = new string[mc_numbers_];
        is_it_correct_ = new bool[mc_numbers_];
      }
      for ( int i = 0; i < mc_numbers_; ++i ) {
        if (mcq.mc_ != nullptr)
          mc_[i] = mcq.mc_[i];
        else
          mc_[i] = "";
        if (mcq.is_it_correct_ != nullptr)
          is_it_correct_[i] = mcq.is_it_correct_[i];
        else
          is_it_correct_[i] = true;
      }
    }
  }
  MultipleChoiceQuestion& MultipleChoiceQuestion::operator =(const MultipleChoiceQuestion& mcq) {
    Question::SetQuestion(mcq.GetQuestion());
    mc_numbers_ = mcq.mc_numbers_;
    if ( mc_ != nullptr  )
      delete [] mc_;
    if ( is_it_correct_ != nullptr )
      delete [] is_it_correct_;
    if ( mc_numbers_ >=  0 ) {
      if ( mc_numbers_ == 0 ) {
        mc_ = nullptr;
        is_it_correct_ = nullptr;
      } else {
        mc_ = new string[mc_numbers_];
        is_it_correct_ = new bool[mc_numbers_];
      }
      for ( int i = 0; i < mc_numbers_; ++i ) {
        if (mcq.mc_ != nullptr)
          mc_[i] = mcq.mc_[i];
        else
          mc_[i] = "";
        if (mcq.is_it_correct_ != nullptr)
          is_it_correct_[i] = mcq.is_it_correct_[i];
        else
          is_it_correct_[i] = true;
      }
    }
    return *this;
  }
  void MultipleChoiceQuestion::SetAnswerChoices(int i, string * sptr,
                                                          bool * bptr) {
    if ( i >= 0 ) {
      if ( mc_ != nullptr )
        delete[] mc_;
      if ( is_it_correct_ != nullptr )
        delete[] is_it_correct_;
      mc_numbers_ = i;
      if ( mc_numbers_ == 0 ) {
        mc_ = nullptr;
        is_it_correct_ = nullptr;
      } else {
        mc_ = new string[i];
        is_it_correct_ = new bool[i];
        for ( int j = 0; j < i; ++j ) {
          if (sptr != nullptr)
            mc_[j] = sptr[j];
          else
            mc_[j] = "";
          if (bptr != nullptr)
            is_it_correct_[j] = bptr[j];
          else
            is_it_correct_[j] = true;
        }
      }
    }
  }
  void MultipleChoiceQuestion::Print(bool b) const {
    Question::Print();
    cout << "Answer Choices:" << endl;
    for (int i = 0; i < mc_numbers_; ++i) {
      cout << mc_[i];
      if (b)
        cout << " - " << (is_it_correct_[i] ? "correct" : "incorrect");
      cout << endl;
    }
  }
}  // namespace csce240_program5
