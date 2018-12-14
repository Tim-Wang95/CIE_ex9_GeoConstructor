#include "Intersection.hpp"


Intersection::Intersection(AbsImplicitGeometry* operand1, AbsImplicitGeometry* operand2) :	AbsOperation(operand1, operand2) {}Intersection::~Intersection() {	delete operand1_; delete operand2_;}bool Intersection::inside(double x, double y) const {	return (operand1_->inside(x, y) && operand2_->inside(x, y));}