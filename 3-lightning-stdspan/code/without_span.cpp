#include <iostream>

void print_array(int *arr, int arr_len) {
	for (int i = 0; i < arr_len; ++i) {
		int item = arr[i];
		std::cout << item << '\n';
	}
}

int main() {
	int my_arr[] = {94, 20, 0, 17, 8};
	int my_arr_len = sizeof(my_arr) / sizeof(my_arr[0]);

	print_array(my_arr, my_arr_len);
}
