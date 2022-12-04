#include "search.h"
#include <iostream>

int main() {
	//std::vector<std::pair<int, int>> schedules = {{1, 5}, {4, 13}, {5, 20}, {13, 25}, {20, 30} };
	//std::vector<int> selected_schedule_numbers = Search::IntervalScheduling(schedules);
	//for (auto& selected_schedule_number : selected_schedule_numbers) std::cout << selected_schedule_number;
	std::vector<std::pair<int, int>> schedules = { {1, 5}, {4, 5}, {5, 6}, {6, 7}, {2, 9}, {4, 10}, {8, 13} };
	std::vector<int> selected_schedule_numbers = Search::IntervalScheduling(schedules);
	for (auto& selected_schedule_number : selected_schedule_numbers) std::cout << selected_schedule_number;
}