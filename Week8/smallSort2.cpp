/****************************************************************************************************************
** Name: Jacob Burton
** Date: 02/27/2019
** Description: Void function that takes in the addresses of three int variables and sorts the ints at those
**              addresses into ascending order (lowest to highest).
*****************************************************************************************************************/

#include <iostream>
#include <string>

// void smallSort2(int * const &, int * const &, int * const &);

// int main() {
// 	int first = 14;
// 	int second = -90;
// 	int third = 2;
// 	smallSort2(&first, &second, &third);
// 	std::cout << first << ", " << second << ", " << third << std::endl;
// 	return 0;
// }



void smallSort2 (int * const &firstIn, int * const &secondIn, int * const &thirdIn) {
	int temp;
	int *first = firstIn;
	int *second = secondIn;
	int *third = thirdIn;
	if (*first > *second) {
		temp = *first;
		*first = *second;
		*second = temp;
	}
	if (*first > *third) {
		temp = *first;
		*first = *third;
		*third = temp;
	} 
	if (*second > *third) {
		temp = *second;
		*second = *third;
		*third = temp;
	}
}