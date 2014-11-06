/*
 * jump.cpp
 *
 *  Given an array of non-negative integers, you are initially positioned
 *  at the first index of the array. Each element in the array represents
 *  your maximum jump length at that position. Each element in the array
 *  represents your maximum jump length at that position.
 *
 *  For example:
 *    Given array A = [2,3,1,1,4]
 *
 *    The minimum number of jumps to reach the last index is 2.
 *    (Jump 1 step from index 0 to 1, then 3 steps to the last index.)
 *
 *  Created on: 2014-10-6
 *      Author: Feng
 */

#include <algorithm>
using namespace std;


int jump(int A[], int n)
{
	if (n <= 1)
		return 0;

	int step = 0;
	int last_reach = 0;
	int reach = 0;
	for (int i = 0; i <= reach && i < n; ++i) {
		if (i > last_reach) {
			step++;
			last_reach = reach;
		}
		reach = max(reach, A[i]+i);
	}

	if (reach < n-1)
		return 0;
	else
		return step;
}

