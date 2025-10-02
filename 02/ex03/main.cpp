#include "Point.hpp"
#include <iostream>

int main(void) {
  Point p;
  Point p1(2, 10);
  Point p2(50, 3.14);
  Point p3(-50, -10);

  std::cout << bsp(p1, p2, p3, p) << std::endl;
}
