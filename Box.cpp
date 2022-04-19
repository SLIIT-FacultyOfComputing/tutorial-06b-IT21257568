#include "Box.h"

// Implement setters and getters
void Box::setLength(int L)
{
  length = L;
}
void Box::setWidth(int W)
{
  width = W;
}
void Box::setHeight(int H)
{
  height = H;
}
int Box::getLength()
{
  return length;
}
int Box::getWidth()
{
  return width;
}
int Box::getHeight()
{
  return height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
          int volume = length * width * height;
          return volume;
}
