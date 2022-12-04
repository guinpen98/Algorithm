#include "sort.h"
#include <iostream>

int main() {
	std::vector<int> a{ 4, 5, 6, 1, 2, 3 };
	a = Sort::MergeSort(a);
	for(auto& b : a) std::cout << b << std::endl;
}