#pragma once

#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <vector>
#include <algorithm> 

template <class T>
class BaseClass {
public: 
	std::vector<T> vec;

	BaseClass() = default;
	virtual ~BaseClass() = default;

	virtual void get_data(std::istream*) = 0;
	virtual void print_data(std::ostream*) = 0;

	T even_num_prod() const {
		T prod = 1;

		for (int i = 1; i < this->vec.size(); i += 2)
			prod *= this->vec[i];

		return prod;
	}

	T sum_betw_zeros() const {
		T sum = 0;
		std::vector<int> toFind = { 0 };

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

template <class T>
class Child1 : public BaseClass<T> {
public:
	Child1() = default;
	virtual ~Child1() = default;

	virtual void get_data(std::istream* is) override {
		int size;
		std::cout << "Enter the array`s size: ";
		*is >> size;

		this->vec.resize(size);

		std::cout << "\nEnter your array:\n";
		for (int i = 0; i < size; i++)
			*is >> this->vec[i];
	}

	virtual void print_data(std::ostream* os) override {
		int j = 0;
		for (auto i = this->vec.begin(); i != this->vec.end(); i++, j++)
			*os << "arr[" << j << "] = " << *i << "\n";
	}
};

template <class T>
class Child2 : public BaseClass<T> {
public:
	Child2() = default;
	virtual ~Child2() = default;

	virtual void get_data(std::istream* ifs) override {
		int size;
		*ifs >> size;
		this->vec.resize(size);
		for (int i = 0; i < size; i++)
			*ifs >> this->vec[i];
	}

	virtual void print_data(std::ostream* ofs) override {
		*ofs << "\nProd = " << this->even_num_prod() << "\n";
		*ofs << "Sum = " << this->sum_betw_zeros() << "\n\n";
		this->pos_neg_sort();

		int j = 0;
		for (auto i = this->vec.begin(); i != this->vec.end(); i++, j++)
			*ofs << "arr[" << j << "] = " << *i << "\n";
	}
};