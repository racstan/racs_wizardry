#include <iostream>

class Vector{
    public:
  Vector(int x, int y) {
    this->x = x;
    this->y = y;
}

  friend std::ostream& operator<<(std::ostream& os, const Vector& v) {
