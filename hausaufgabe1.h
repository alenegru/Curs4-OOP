#pragma once
template <typename T>

T sum(T array[], int start, int end, T value = 0) {
	T summ = 0;
	for (int i = start; i <= end; i++)
		summ += array[i];

	return summ + value;
}
