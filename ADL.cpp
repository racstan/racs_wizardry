#include <iostream>

class Vector{
    public:
  Vector(int x, int y) {
    this->x = x;
    this->y = y;
}

  friend std::ostream& operator<<(std::ostream& os, const Vector& v) {
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}

private:
  int x;
  int y;
};
int main() {
  Vector v1(1, 2);
  Vector v2(3, 4);

  std::cout << v1 << " + " << v2 << " = ";
