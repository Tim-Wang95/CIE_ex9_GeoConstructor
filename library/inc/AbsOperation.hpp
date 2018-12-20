#ifndef ABSOPERATION_HPP
#define ABSOPERATION_HPP

#include "AbsImplicitGeometry.hpp"

class AbsOperation : public AbsImplicitGeometry {
	public:
		AbsOperation(AbsImplicitGeometry* operand1, AbsImplicitGeometry* operand2);
		virtual ~AbsOperation();
		virtual bool inside(double x, double y) const = 0;

		AbsImplicitGeometry* operand1_;
		AbsImplicitGeometry* operand2_;
};

#endif
