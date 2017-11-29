#include <iostream>

using namespace std;

int main(){

	string line{};

	while (geline(cin, line)){
		try {
			line.at(10) = ' '; //	can throw out_of_range
			if(line.size() < 20)
				line.append(line.max_size(), '*'); //	can throw length_error
			for(string::size_type size(line.size()); size < line.max_size(); size = size * 2) {
				line.resize(size); // can throw bad_alloc
			}
			line.resize(line.max_size()); // can throw bad_alloc
			cout << "okay\n";
		}
		catch (out_of_range const& ex) {
			cout << ex.what() << '\n';
			cout << "string index (10) out of range. \n";
		}
		catch (exception const& ex) {
			cout << "other exception: " << ex.what() << '\n';
		}
		catch (...) {
			cout << "Unknown exception type. Progream terminating.\n";
			abort();
		}
	}
	return 0;
}