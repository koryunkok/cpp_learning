#include <iostream>

int sum_of_numbers (int number) {
	int a,b;
	int sum;
	sum = a + b;
	return sum;
}
 int main () {
	 int number;
	 std::cout << "Enter number = ";
	 std::cin >> number;
	 std::cout << "Sum of the numbers : " << sum_of_numbers (number) << std::endl;

	 return 0;
 }
