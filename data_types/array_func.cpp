#include <iostream>

int* sort_array (int* array, int n) {
	int* result_array = array;
	//1. create result array
	//2. sort input array and fill result array
	//3. return result array


	for (int i = 0; i <= n-2; i++)  {
                for (int j = 0; j <= n-2-i; j++) {
                        if (result_array[j] > result_array[j+1]) {
                                int temp = result_array[j];
                                result_array[j] = result_array[j+1];
                                result_array[j+1] = temp;
                        }

                }
          }
        return result_array;
}
	

int main () {
	int massiv[5];
	for (int m = 0; m < 5; m++) {
	std::cout << "Please enter number : ";
	std::cin >> massiv [m];
        }
	int* sorted_array = sort_array (massiv, 5);
	std::cout << "Your array is : ";
	for (int l = 0; l < 5; l++) {
	std::cout << sorted_array[l] << "  ";
	}


return 0;
}

