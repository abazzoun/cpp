#include "Point.hpp"

static Fixed cross_product(const Point& v, const Point& w) {
	return v.x() * w.y() - v.y() * w.x();
}

static bool same_side(const Point& a, const Point& b, const Point& p1,
											const Point& p2) {
	Fixed	cp1 = cross_product(b - a, p1 - a);
	Fixed cp2 = cross_product(b - a, p2 - a);

  return (cp1 > Fixed(0) && cp2 > Fixed(0)) ||
         (cp1 < Fixed(0) && cp2 < Fixed(0));
}

bool bsp(const Point a, const Point b, const Point c, const Point p) {
	return same_side(a, b, p, c) &&
         same_side(b, c, p, a) &&
         same_side(c, a, p, b);
}
