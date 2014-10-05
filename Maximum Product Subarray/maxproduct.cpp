/*
 * maxproduct.cpp
 *  Find the contiguous subarray within an array (containing at least one number)
 *  which has the largest product.
 *
 *  For example, given the array [2,3,-2,4],
 *  the contiguous subarray [2,3] has the largest product = 6.
 *
 *  Created on: 2014-10-5
 *      Author: Feng
 */

#include <numeric>
using namespace std;


int maxProduct(int A[], int n)
{
	int maxval = A[0];
	int minval = A[0];
	int result = A[0];

	for(int i = 1; i < n; ++i) {
		int a = maxval * A[i];
		int b = minval * A[i];
		int c = A[i];
		maxval = max(max(a,b), c);
		minval = min(min(a,b), c);

		result = maxval > result ? maxval : result;
	}

	return result;
}

