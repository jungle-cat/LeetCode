/*
 * firstmiss.cpp
 *
 *  Given an unsorted integer array, find the first missing positive integer.
 *
 *  For example,
 *  Given [1,2,0] return 3,
 *  and [3,4,-1,1] return 2.
 *
 *  Your algorithm should run in O(n) time and uses constant space.
 *
 *  Created on: 2014-10-5
 *      Author: Feng
 */

#include <algorithm>
using namespace std;

int firstMissingPositive(int A[], int n)
{
	int i = 0;
	while (i < n) {
		if (A[i] >= 0 && A[i] < n && A[A[i]] != A[i])
			swap(A[i], A[A[i]]);
		else
			++i;
	}

	for (i = 1; i < n; ++i)
		if (A[i] != i)
			break;
	if (n == 0 || i < n)
		return i;
	else
		return A[0] == i ? i+1 : i;
}

