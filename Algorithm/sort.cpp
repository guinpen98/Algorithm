#include "sort.h"
#include <algorithm>
#include <cmath>

std::vector<int> Sort::Merge(const std::vector<int>& a, const std::vector<int>& b)
{
	int a_size = (int)a.size();
	int b_size = (int)b.size();
	int a_cnt = 0;
	int b_cnt = 0;
	std::vector<int> answer(a_size + b_size);
	while (a_size != a_cnt || b_size != b_cnt) {
		if (a_size == a_cnt) {
			answer[a_cnt + b_cnt] = b[b_cnt];
			b_cnt++;
			continue;
		}
		if (b_size == b_cnt) {
			answer[a_cnt + b_cnt] = a[a_cnt];
			a_cnt++;
			continue;
		}
		if (a[a_cnt] < b[b_cnt]) {
			answer[a_cnt + b_cnt] = a[a_cnt];
			a_cnt++;
		}
		else {
			answer[a_cnt + b_cnt] = b[b_cnt];
			b_cnt++;
		}
	}
	return answer;
}

std::vector<int> Sort::MergeSort(const std::vector<int>& a)
{
	if (a.size() == 1) return a;
	int n = (int)std::floor(double(a.size()) / 2);
	std::vector<int> l{ a.begin(),a.begin() + n };
	std::vector<int> r{ a.begin() + n, a.end() };
	std::sort(l.begin(), l.end());
	std::sort(r.begin(), r.end());
	return Merge(l, r);
}

int Sort::BinarySearch(const std::vector<int>& vector, const int x)
{
	int left = 0;
	int right = (int)vector.size();
	int center = (int)std::floor((left + right) / 2);
	while (left + 1 < right) {
		center = (int)std::floor((left + right) / 2);
		if (x < vector[center]) right = center;
		else left = center;
	}
	if (vector[left] == x) return left;
	else return -1;
}
