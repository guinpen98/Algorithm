#ifndef ALGORITHM_SORT_H
#define ALGORITHM_SORT_H

#include <vector>

class Sort {
private:
	static std::vector<int> Merge(const std::vector<int>& a, const std::vector<int>& b);
public:
	static std::vector<int> MergeSort(const std::vector<int>& a);
};
#endif //!ALGORITHM_SORT_H