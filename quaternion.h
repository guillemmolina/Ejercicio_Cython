#ifndef __QUATERNION__
#define __QUATERNION__

struct Quaternion {
  Quaternion(float _w, float _x, float _y, float _z):
  w(_w), x(_x), y(_y), z(_z)
  {};

  float w,x,y,z;
};

#endif
