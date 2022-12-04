#include "search.h"
#include "sort.h"
#include <iostream>

int main() {
	std::vector<int> numbers{ 1, 4 ,6, 8, 3, 2, 7 };
	numbers = Sort::MergeSort(numbers);
	for (auto& number : numbers) std::cout << number;
}