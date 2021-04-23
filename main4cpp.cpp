#include <iostream>
#include <Windows.h>

#include "MyArraySTL.h"

int main() {
	using namespace std;

	MyArraySTL<int> arr;
	int size;

	cout << "Enter the array`s size: ";
	cin >> size;

	arr.vec.resize(size);

	cout << "\nEnter your array:\n";
	for (int i = 0; i < size; i++)
		cin >> arr.vec[i];

	cout << "\nYour array:\n";
	for (int i = 0; i < size; i++)
		cout << "arr[" << i << "] = " << arr.vec[i] << "\n";

	cout << "\nProd = " << arr.even_num_prod() << "\n";
	cout << "Sum = " << arr.sum_betw_zeros() << "\n\n";

	arr.pos_neg_sort();
	cout << "Sorted:\n";
	for (int i = 0; i < size; i++)
		cout << "arr[" << i << "] = " << arr.vec[i] << "\n";

	cout << "\n";
	system("pause");
	return 0;
}