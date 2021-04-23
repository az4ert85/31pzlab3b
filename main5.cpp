#include <iostream>
#include <Windows.h>
#include <fstream>

#include "Classes.h"

int main() {
	using namespace std;

	ifstream inf("file1.txt");
	ofstream outf("file2.txt");

	Child1<int> arr;
	arr.get_data(&std::cin);

	cout << "\nProd = " << arr.even_num_prod() << "\n";
	cout << "Sum = " << arr.sum_betw_zeros() << "\n\n";

	arr.pos_neg_sort();
	cout << "Sorted:\n";
	arr.print_data(&std::cout);

	Child2<int> arr2;
	arr2.get_data(&inf);
	arr2.print_data(&outf);

	cout << "\n";
	system("pause");
	return 0;
}