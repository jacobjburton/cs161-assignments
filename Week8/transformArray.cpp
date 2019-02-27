/****************************************************************************************************************
** Name: Jacob Burton
** Date: 02/27/2019
** Description: 
*****************************************************************************************************************/

#include <iostream>
#include <string>

// void transformArray(int *&, int);

// int main() {
	
// 	int *array = new int[3];
// 	array[0] = 4;
// 	array[1] = 2;
// 	array[2] = 5;

// 	transformArray(array, 3);

// 	for (int i = 0; i < 6; i++) {
// 		std::cout << array[i] << std::endl;
// 	}

// 	delete []array;
// 	return 0;
// }


//transform array
void transformArray(int *&arr, int length) {
	//int *newArray = new int[length * 2];

	for (int i = 0; i < length * 2; i++) {
		// if (i < length) {
		// 	*newArray[i] = arr[i];
		// } else {
		if (i >= length) {
			int doubleValue = arr[i - length] * 2;
			arr[i] = doubleValue;
		}
	}
	
	//arr = newArray;
}