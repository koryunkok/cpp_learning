#include <iostream>

int main () {
	int array[5];
	std::cout << "Enter five numbers \n";
	for (int i = 0; i < 5; i++) {
		std::cout << i << "-";
	        std::cin >> array [i];
	    }
		for (int j = 0; j < 5; j++) {
			if (array[j] % 3 == 0)
			std::cout << array [j] << " ";
		}
		std::cout << std::endl;

		
	
	

  return 0;
}  
