// Copyright 2024 temmons

#include"PixelShape.h"
#include"Rectangle.h"
#include<string>
#include<iostream>
using std::string;
using std::cout;

namespace CSCE240_Program6 {
  Rectangle::Rectangle(int length, int width, char pixel) {
    PixelShape::SetName("rectangle");
    PixelShape::SetPixel(pixel);
    length_ = 2;
    width_ = 1;
    SetLength(length);
    SetWidth(width);
  }

  Rectangle& Rectangle::operator*=(double value) {
    if ((width_ * value) >= 1) {
      width_ *= value;
      length_ *= value;
    }
    return *this;
  }

  void Rectangle::SetLength(int l) {
    if ( l > 0 )
      length_ = l;
  }
  void Rectangle::SetWidth(int w) {
    if ( w > 0 )
      width_ = w;
  }

  void Rectangle::Print(bool b) const {
    PixelShape::Print();
    cout << endl;
    for (int i = 0; i < length_; ++i) {
      for (int j = 0; j < width_; ++j) {
        if (i == 0 || i == (length_ - 1)) {
          cout << PixelShape::GetPixel() << " ";
        } else {
          if (b) {
            cout << PixelShape::GetPixel() << " ";
          } else {
            if (j == 0 || j == width_ - 1) {
              cout << PixelShape::GetPixel() << " ";
            } else {
            cout << " " << " ";
            }
          }
        }
      }
      cout << endl;
    }
  }
}  // namespace CSCE240_Program6
