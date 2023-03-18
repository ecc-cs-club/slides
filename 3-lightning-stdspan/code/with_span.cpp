#include <iostream>
#include <span> // 1. include span

// 2. use std::span
void print_array(std::span<int> arr) {

	// 'arr' is a class - to get the size, call `.size()`
	for (int i = 0; i < arr.size(); ++i) {
		// You can index your array as you usually do
		int item = arr[i];
		std::cout << item << '\n';
	}
}

int main() {
	int my_arr[] = {94, 20, 0, 17, 8};

	print_array(my_arr);
}
