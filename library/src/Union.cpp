#include "Union.hpp"


Union::Union(AbsImplicitGeometry* operand1, AbsImplicitGeometry* operand2) :
	AbsOperation(operand1, operand2) {}

/*
Union::~Union() {
	delete operand1_; delete operand2_;
}
*/

bool Union::inside(double x, double y) const {
	return (operand1_->inside(x, y) || operand2_->inside(x, y));
}
