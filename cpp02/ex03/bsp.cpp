#include "Point.hpp"

static Fixed dot_product(const Point& v, const Point& w) {
	return v.x * w.x + v.y * w.y;
}

static Fixed cross_product(const Point& v, const Point& w) {
	return v.x() * w.y() - v.y() * w.x();
}

static bool same_side(const Point& a, const Point& b, const Point& p1
											const Point& p2) {
	Fixed	cp1 = cross_product(b - a, p1 - a);
	Fixed cp2 = cross_product(b - a, p2 - a);

	if (dot_product(cp1, cp2) >= 0)
		return true;
	return false;
}

bool bsp(const Point a, const Point b, const Point c, const Point p) {
	if (same_side(p, a, b, c) && same_side(p, b, a, c) && same_side(p, c, a, b))
		return true;
	return false;
}
