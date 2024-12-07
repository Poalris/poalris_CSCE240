// Copyright 2024 temmons

#include"PixelShape.h"
#include"RightIsosceles.h"
#include<iostream>
using std::cout;
using std::endl;

namespace CSCE240_Program6 {
  RightIsosceles::RightIsosceles(int leg, char pixel) {
    PixelShape::SetName("right isosceles triangle");
    PixelShape::SetPixel(pixel);
    leg_ = 2;
    SetLeg(leg);
  }
  RightIsosceles& RightIsosceles::operator*=(double value) {
    if ((leg_ * value) >= 2)
      leg_ *= value;

    return *this;
  }
  void RightIsosceles::SetLeg(int l) {
    if (l > 1)
      leg_ = l;
  }
  void RightIsosceles::Print(bool b) const {
    PixelShape::Print();
    for (int i = 0; i <= leg_; ++i) {
      for (int j = 0; j < i; ++j) {
        if (b || (i == leg_)) {
          cout << PixelShape::GetPixel() << " ";
        } else {
          if (j > 0 && j < i-1)
            cout << " " << " ";
          else
            cout << PixelShape::GetPixel() << " ";
        }
      }
      cout<< endl;
    }
  }
}  // namespace CSCE240_Program6
