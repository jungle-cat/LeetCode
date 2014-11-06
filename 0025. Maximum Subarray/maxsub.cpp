/*
 * maxsub.cpp
 *
 *  Find the contiguous subarray within an array (containing at least one
 *  number) which has the largest sum.
 *
 *  For example, given the array [−2,1,−3,4,−1,2,1,−5,4],
 *  the contiguous subarray [4,−1,2,1] has the largest sum = 6.
 *
 *  More practice:
 *    If you have figured out the O(n) solution, try coding another solution
 *    using the divide and conquer approach, which is more subtle.
 *
 *  Created on: 2014-11-6
 *      Author: Feng
 */



int maxSubArray(int A[], int n)
{
	if (n == 0)
		return 0;

	int max = A[0];
	int sum = A[0];
	for (int i = 1; i < n; ++i) {
		sum = sum > 0 ? sum+A[i] : A[i];
		if (max < sum)
			max = sum;
	}
	return max;
}
