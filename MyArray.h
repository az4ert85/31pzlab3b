#pragma once

#include <iostream>
#include <cassert> 

template <class T>
class MyArray {
private:
	int m_length;
	T* m_data;
public:
	MyArray(const int& len = 0) {
		this->m_length = len;
		if (this->m_length)
			this->m_data = new T[m_length];
		else
			this->m_data = nullptr;
	}

	~MyArray() {
		delete[] this->m_data;
	};

	T& operator[] (const int& indx) {
		assert(indx >= 0 && indx < this->m_length && "Error: Index is out of the array`s range!\n");
		return this->m_data[indx];
	}

	void resize(const int& new_size) {
		delete[] this->m_data;
		this->m_data = new T[new_size];
		this->m_length = new_size;
	}

	int len() const { return this->m_length; }
	
	T even_num_prod() const {
		T prod = 1;

		for (int i = 1; i < this->m_length; i += 2)
			prod *= this->m_data[i];

		return prod;
	}

	T sum_betw_zeros() const {
		T sum = 0;
		int i, a, b;
		
		for (i = 0, a = i; this->m_data[i] != 0; i++)
			a = i;

		for (i = this->m_length - 1, b = i; this->m_data[i] != 0; i--)
			b = i;
		
		for (i = a + 1; i < b; i++)
			sum += this->m_data[i];

		return sum;
	}

	void pos_neg_sort() {
		int i, j, neg;
		for (i = 0, j = this->m_length - 1; i <= j; i++) {
			for (neg = j; this->m_data[neg] < 0; neg--);
			if(j != neg)
				j = neg;
			if (i >= j)
				continue;
			if (this->m_data[i] < 0) {
				auto tmp = this->m_data[i];
				this->m_data[i] = this->m_data[neg];
				this->m_data[neg] = tmp;
			}
		}
	}
};