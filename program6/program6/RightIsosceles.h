// Copyright 2024 temmons

#ifndef _RIGHTISOSCELES_H_
#define _RIGHTISOSCELES_H_
#include"PixelShape.h"


namespace CSCE240_Program6 {
class RightIsosceles : public PixelShape {
 public:
  explicit RightIsosceles(int leg = 2, char pixel = '*');
  virtual ~RightIsosceles() {}
  int GetLeg() const { return leg_; }
  void SetLeg(int l);

  virtual void Print(bool b = true) const;
  virtual RightIsosceles& operator*=(double value);
 private:
  int leg_;
};
}  // namespace CSCE240_Program6

#endif  // _RIGHTISOSCELES_H_
