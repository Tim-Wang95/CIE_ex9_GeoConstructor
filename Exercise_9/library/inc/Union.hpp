#ifndef UNION_HPP
#define UNION_HPP

#include "AbsOperation.hpp"

class Union : public AbsOperation {
	public:
		Union(AbsImplicitGeometry* operand1, AbsImplicitGeometry* operand2);
		~Union();
		virtual bool inside(double x, double y) const;
};

#endif