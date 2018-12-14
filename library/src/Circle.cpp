#include "Circle.hpp"

Circle::Circle(double x, double y, double r) :
	x_(x), y_(y), r_(r) {}

bool Circle::inside(double x, double y) const {
	return ((x-x_)*(x - x_)+ (y - y_)*(y - y_)) <= r_*r_;
}
