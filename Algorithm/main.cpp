#include "search.h"
#include <iostream>

int main() {
	int x;
	std::cin >> x;
	std::vector<int> a{5, 23, -12, 9, 43, 12, -71, -33, 55};
	std::cout << Search::BinarySearch(a, x) << std::endl;
}