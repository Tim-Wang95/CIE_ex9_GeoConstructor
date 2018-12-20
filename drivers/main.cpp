#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Union.hpp"
#include "Difference.hpp"
#include "Intersection.hpp"
#include "implicitgeometry.hpp"

int main( ) {
	
	AbsImplicitGeometry* c = new Circle(10,10,4);
	AbsImplicitGeometry* r = new Rectangle(6, 6, 14, 14);
	AbsImplicitGeometry* r2 = new Rectangle(9, 0, 11, 20);
	AbsImplicitGeometry* c2 = new Circle(10, 10, 3);

	AbsOperation* s1 = new Intersection(c, r);
	AbsOperation* s2 = new Union(s1, r2);
	AbsOperation* s3 = new Difference(s2, c2);

	//implicitgeometry shape(Intersection(c,r));
	//Intersection(c, r);

	for (double y = 20; y > 0; y-=0.5) {
		for (double x = 0; x < 20; x+=0.5) {
			if (s3->inside(x, y)) { std::cout << "+"; }
			else { std::cout << " "; }
		}
		std::cout << std::endl;
	}

    return 0;
}
