// Copyright 2024 temmons

#include"PixelShape.h"
#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_
#include<iostream>
#include<string>
using std::string;

namespace CSCE240_Program6 {
class Rectangle : public PixelShape {
 public:
  explicit Rectangle(int length = 2, int width = 1, char pixel = '*');
  virtual ~Rectangle() {}

  void SetLength(int l);
  void SetWidth(int w);

  int GetLength() const { return length_; }
  int GetWidth() const { return width_; }

  virtual Rectangle& operator*=(double value);
  virtual void Print(bool b = true) const;

 private:
  int length_;
  int width_;
};  // end class Rectangle
}  // namespace CSCE240_Program6

#endif  // _RECTANGLE_H_
