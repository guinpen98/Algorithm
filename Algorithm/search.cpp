#include "search.h"
#include <cmath>

int Search::BinarySearch(const std::vector<int>& vector, const int x)
{
	int left = 0;
	int right = (int)vector.size();
	int center = std::floor((left + right) / 2);
	while (left + 1 < right) {
		center = std::floor((left + right) / 2);
		if (x < vector[center]) right = center;
		else left = center;
	}
	if (vector[left] == x) return left;
	else return -1;
}
