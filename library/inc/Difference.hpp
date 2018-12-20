#ifndef DIFFERENCE_HPP
#define DIFFERENCE_HPP

#include "AbsOperation.hpp"

class Difference : public AbsOperation {
	public:
		Difference(AbsImplicitGeometry* operand1, AbsImplicitGeometry* operand2);
		//~Difference();
		virtual bool inside(double x, double y) const;
};

#endif
