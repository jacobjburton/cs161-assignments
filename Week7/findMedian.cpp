/****************************************************************************************************************
** Name: Jacob Burton
** Date: 02/16/2019
** Description: Function that takes two parameters, an array of int and the size of the array.  Returns the
**              median of the array.
*****************************************************************************************************************/

#include <algorithm>

double findMedian(int nums[], int length) {
	double median;
	std::sort(nums, nums + length);
	int m1 = length / 2;
	int m2 = length / 2 - 1;

	if (length % 2 == 0) {
		median = (nums[m1] + nums[m2]) / 2;
	}
	else {
		median = nums[m1];
	}
	return median;
}
