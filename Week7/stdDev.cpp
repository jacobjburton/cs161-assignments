/****************************************************************************************************************
** Name: Jacob Burton
** Date: 02/16/2019
** Description: Function that takes two parameters, an array of Person objects, and the size of the array.
**              Calculates and returns the standard deviation of the ages of each Person in the array.
*****************************************************************************************************************/

#include "Person.hpp"
#include <cmath>
#include <math.h>


double stdDev(Person arr[], int length) {
	double standardDeviation;
	double sumOfAges = 0.0;
	double averageOfAges = 0.0;
	double ageMinusAverageSquared = 0.0;

	for (int i = 0; i < length; i++) {
		sumOfAges += arr[i].getAge();
	}
	averageOfAges = sumOfAges / length;
	for (int i = 0; i < length; i++) {
		ageMinusAverageSquared += pow(arr[i].getAge() - averageOfAges, 2.0);
	}	
	standardDeviation = sqrt(ageMinusAverageSquared / length);

	return standardDeviation;
}