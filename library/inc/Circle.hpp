#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "AbsImplicitGeometry.hpp"

class Circle : public AbsImplicitGeometry {
	public:
		Circle(double x, double y, double r);
		virtual bool inside(double x, double y) const;

	private:
		double x_, y_, r_;
	};

#endif