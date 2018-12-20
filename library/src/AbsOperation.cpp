#include "AbsOperation.hpp"

AbsOperation::AbsOperation(AbsImplicitGeometry* operand1, AbsImplicitGeometry* operand2) :
	operand1_(operand1), operand2_(operand2) {}

AbsOperation::~AbsOperation() {
	delete operand1_; delete operand2_;
}
