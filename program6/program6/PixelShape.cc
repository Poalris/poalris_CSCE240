// Copyright 2024 temmons
// Creating the functions for the PixelShape class

#include "PixelShape.h"
#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

namespace CSCE240_Program6 {
  PixelShape::PixelShape(string name, char pixel) {
    if (name != "")
      SetName(name);
    else
      SetName("?");

    if (pixel != '\n')
      SetPixel(pixel);
    else
      SetPixel('*');
  }
  PixelShape& PixelShape::operator*=(double value) {
    return *this;
  }
  void PixelShape::SetName(string n) {
    if ( n.size() > 0 )
      name_ = n;
  }
  void PixelShape::SetPixel(char p) {
    if ( p >= 33 && p <= 126 )
      pixel_ = p;
  }
  void PixelShape::Print(bool b) const {
    cout << GetName();
  }

}  // namespace CSCE240_Program6
