#include <iostream>
#include "generate_id.hpp"
int main() {
	generate_id generator1 {100}, generator2{200};

	std::cout << "Generator with base value 100: " << std::endl;
	for(int i{0}; i != 10; ++i)
		std::cout << generator1.next() << std::cout;

	std::cout << "Generator with base value 200: " << std::endl;
	for(int i{0}; i != 10; ++i)
		std::cout << generator2.next() << std::endl;
}