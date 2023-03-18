#include <iostream>

auto add_one(int num) -> int {
	return num + 1;
}

auto add_fraction(int num) {
	return num + 2.5;
}

int main() {
	auto num1 = add_one(10);
	auto num2 = add_fraction(20);

	std::cout << num1 << '\n';
	std::cout << num2 << '\n';
}