#ifndef ABSIMPLICITGEOMETRY_HPP
#define ABSIMPLICITGEOMETRY_HPP

#include <iostream>
#include <cmath>


class AbsImplicitGeometry {
	public:
		virtual ~AbsImplicitGeometry() {};
		virtual bool inside(double x, double y) const = 0;
	};

#endif