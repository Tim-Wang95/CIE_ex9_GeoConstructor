#ifndef INTERSECTION_HPP
#define INTERSECTION_HPP


#include "AbsOperation.hpp"

class Intersection : public AbsOperation {
	public:
		Intersection(AbsImplicitGeometry* operand1, AbsImplicitGeometry* operand2);
		~Intersection();
		virtual bool inside(double x, double y) const;
};
	
#endif