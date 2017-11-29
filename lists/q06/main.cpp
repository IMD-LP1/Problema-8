#include <iostream>

#include "math.hpp"

//	More digits that typical implementations of double support.
double pi{3.14159265358979323846264338327};

int main() {
	double r{};

	std::cout << "Inform the radius of the circle: ";
	cin >> r;
	std::cout << "Area of the circle: " << math::area(r) << std::endl;
	
	return 0;	
}