#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x_(0), y_(0) {}
Point::Point(const float x, const float y) : x_(Fixed(x)), y_(Fixed(y)) {}
Point::Point(const Fixed& x, const Fixed& y) : x_(x), y_(y) {}
Point::Point(const Point& other) : x_(other.x_), y_(other.y_) {}

Point& Point::operator=(const Point& other) {
  (void)other;
  return *this;
}

Point::~Point() {}

Point Point::operator-(const Point& other) const {
	return Point(x_ - other.x_, y_ - other.y_);
}

Fixed Point::x() const {
	return x_;
}

Fixed Point::y() const {
	return y_;
}
