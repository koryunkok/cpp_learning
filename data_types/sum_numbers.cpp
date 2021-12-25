#include <iostream>

int sum_of_numbers (int a, int b) {
	
	int sum;
	sum = a + b;
	return sum;
}
 int main () {
	 int x, y;
	 std::cout << "Enter number x = ";
	 std::cin >> x;
         std::cout << "Enter number y = ";
	 std::cin >> y;
	 std::cout << "Sum of the numbers : " << sum_of_numbers (x , y) << std::endl;

	 return 0;
 }
