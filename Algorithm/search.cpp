#include "search.h"
#include <cmath>
#include <limits>

int Search::BinarySearch(const std::vector<int>& vector, const int x){
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

std::vector<int> Search::IntervalScheduling(std::vector<std::pair<int, int>> schedules){
	int t = -std::numeric_limits<int>::max();
	std::vector<int> schedule_numbers;
	for (int i = 0; i < (int)schedules.size(); ++i) schedule_numbers.push_back(i);
	std::vector<int> selected_schedule_numbers;
	while (1){
		bool isFinish = true;
		for (int i = 0; i < (int)schedules.size(); ++i) {
			if (t > schedules[i].first) continue;
			selected_schedule_numbers.push_back(schedule_numbers[i]);
			t = schedules[i].second;
			isFinish = false;
			schedules.erase(schedules.begin() + i);
			schedule_numbers.erase(schedule_numbers.begin() + i);
			break;
		}
		if (isFinish) break;
	}
	return selected_schedule_numbers;
}
