#include <iostream>
#include <vector>

#include "vital_stats.hpp"

///	Reads and printd the vital stats of two persons
int main() {
	std::std::vector<vital_stats> stats{};
	vital_stats s{};

	for(int i{0}; i < 2; i++) {
		s.read(std::cin, i);
		stats.push_back(s);
	}

	for(auto e: stats)
		e.print(std::cout, 25);

	return 0;
}