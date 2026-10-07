#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x_(0), y_(0) {}

Point::Point(const float x, const float y) : {
	x_ = Fixed(x);
	y_ = Fixed(y);
}

Point::Point(const Point& other) : x_(other.x_), y_(other.y_) {}

Point& Point::operator=(const Point& other) {
  if (this != &other) {}
}

Point& Point::operator-(const Point& other) {
	return Point(x_ - other->x_, y_ - other->y_);
}

Fixed Point::x() {
	return x_;
}

Fixed Point::y() {
	return y_;
}
