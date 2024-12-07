// Copyright 2024 temmons

#ifndef _PIXELSHAPE_H_
#define _PIXELSHAPE_H_
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

namespace CSCE240_Program6 {
class PixelShape {
 public:
  explicit PixelShape(string name = "?", char pixel = '*');
  virtual ~PixelShape() {}
  void SetName(string n);
  void SetPixel(char p);
  string GetName() const { return name_; }
  char GetPixel() const { return pixel_; }

  virtual void Print(bool b = true) const;

  virtual PixelShape& operator*=(double value) = 0;  // if theres need to look
                                        // over other tests, comment this out.

 private:
  string name_;
  char pixel_;
};
}  // namespace CSCE240_Program6

#endif  // _PIXELSHAPE_H_
