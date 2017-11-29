#include <climits>

class generate_id {
public:
	generate_id() = delete;
	generate_id(short value) : base_{value} {}
	long next();
	
private:
	short base_;

	static short counter_;
	static short const prefix_;
};