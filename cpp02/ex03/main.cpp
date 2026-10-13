#include "Point.hpp"
#include <iostream>
#include <string>

static void check_point(const std::string& label, const Point triangle[],
    const Point& point) {
  std::cout << label << ": ";
  if (bsp(triangle[0], triangle[1], triangle[2], point))
    std::cout << "inside\n";
  else
    std::cout << "outside\n";
}

int main() {
  Point triangle[] = {
    Point(0, 0),
    Point(10, 0),
    Point(0, 10),
  };

  check_point("Interior point", triangle, Point(2, 2));
  check_point("Exterior point", triangle, Point(8, 8));
  check_point("Point on edge", triangle, Point(5, 0));
  return 0;
}
