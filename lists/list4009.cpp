#include <iostream>
#include <climits>

class generate_id {
public:
	generate_id() = delete;
	generate_id(short value) : base_{value} {}
	long next();
	
private:
	short base_;

	static short counter_;
	static short const prefix_{1};
};

short generate_id::counter_{0};

//short const generate_id::prefix_{1};

long generate_id::next() {
	if(counter_ == SHRT_MAX)
		counter_ = 0;
	else
		++counter_;
	return static_cast<long>(prefix_) * base_ + counter_;
}

int main() {
	generate_id generator1{100}, generator2{200};

	std::cout << "Generator with base value 100: " << std::endl;
	for(int i{0}; i != 10; ++i)
		std::cout << generator1.next() << std::endl;

	std::cout << "Generator with base value 200: " << std::endl;
	for(int i{0}; i != 10; ++i)
		std::cout << generator2.next() << std::endl;
}