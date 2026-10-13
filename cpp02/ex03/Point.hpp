#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
 public:
  Point();
  Point(const float x, const float y);
  Point(const Fixed& x, const Fixed& y);
  Point(const Point& other);
  Point& operator=(const Point& other);
  
	Fixed x() const;
	Fixed y() const;
  
  ~Point();

	Point operator-(const Point& other) const;
  
 private:
  Fixed const x_;
  Fixed const y_;
};

bool bsp(const Point a, const Point b, const Point c, const Point p);

#endif
