#include "generate_id.hpp"
short generate_id::counter_{0};

short const generate_id::prefix_{1};

long generate_id::next() {
	if(counter_ == SHRT_MAX)
		counter_ = 0;
	else
		++counter_;
	return static_cast<long>(prefix_) * base_ + counter_;
}