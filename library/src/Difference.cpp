#include "Difference.hpp"


Difference::Difference(AbsImplicitGeometry* operand1, AbsImplicitGeometry* operand2) :
	AbsOperation(operand1, operand2) {}

/*
Difference::~Difference() {
	delete operand1_; delete operand2_;
}
*/

bool Difference::inside(double x, double y) const {
	return (operand1_->inside(x, y) && !operand2_->inside(x, y));
}
