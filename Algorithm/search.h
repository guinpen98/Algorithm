#ifndef ALGORITHM_SEARCH_H
#define ALGORITHM_SEARCH_H
#include <vector>
#include <utility>

class Search
{
public:
	static int BinarySearch(const std::vector<int>& vector,const int x);
	static std::vector<int> IntervalScheduling(std::vector<std::pair<int,int>> Schedules);
};
#endif //!ALGORITHM_SEARCH_H

