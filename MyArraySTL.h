#pragma once

#include <iostream>
#include <vector>
#include <algorithm> 

template <class T>
class MyArraySTL {
public:
	std::vector<T> vec;

	MyArraySTL() = default;
	~MyArraySTL() = default;

	T even_num_prod() const {
		T prod = 1;

		for (int i = 1; i < this->vec.size(); i += 2)
			prod *= this->vec[i];

		return prod;
	}

	T sum_betw_zeros() const {
		T sum = 0;
		std::vector<int> toFind = {0};

		auto a = std::find(this->vec.begin(), this->vec.end(), 0);
		auto b = std::find_end(this->vec.begin(), this->vec.end(), toFind.begin(), toFind.end());

		for (auto i = a; i != b; i++)
			sum += *i;

		return sum;
	}

	void pos_neg_sort() {
		std::sort(this->vec.begin(), this->vec.end(), [](const T& a, const T& b) {
			if (a < 0 && b >= 0) return false;
			if (a >= 0 && b < 0) return true;
			if (a < 0 && b < 0)  return a > b;
			return a < b;
		});
	}
};