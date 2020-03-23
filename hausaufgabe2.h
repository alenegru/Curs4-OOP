#pragma once
#include <vector>
#include <algorithm>
using namespace std;
template <typename L>

L sum_lambda(L array[], int start, int end, L value = 0) {
	vector <L> vect;
	for (int i = start; i <= end; i++)
		vect.push_back(array[i]);
 
	std::for_each(vect.begin(), vect.end(), [&value] (L x) {value += x;});

	return value;
}
