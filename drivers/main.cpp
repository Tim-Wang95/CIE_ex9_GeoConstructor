//#include "AbsImplicitGeometry.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"

int main( ) {

	Circle c(3.0, -2.0, 0.6);
	Rectangle r(3.0, -2.0, 0.6, 10);

	std::cout << r.inside(3.0, -2.0);

    return 0;
}
