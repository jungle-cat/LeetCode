/*
 * jump.cpp
 *
 *  Given an array of non-negative integers, you are initially positioned at
 *  the first index of the array. Each element in the array represents your
 *  maximum jump length at that position. Determine if you are able to reach
 *  the last index.
 *
 *  For example:
 *    A = [2,3,1,1,4], return true.
 *    A = [3,2,1,0,4], return false.
 *
 *  Created on: 2014-10-6
 *      Author: Feng
 */


#include <vector>
using namespace std;

/*!
 * @brief The native version of jump decision, which will exceed time limits.
 */
bool canJump(int A[], int n)
{
	vector<int> tb(n,false);
	tb[0] = true;

	for(int i = 0; i < n; ++i){
		if (!tb[i])
			continue;
		for (int j = i+1; j <= i+A[i] && j < n; ++j)
			tb[j] = true;
		cout << tb <<endl;
	}
	return tb[n-1];
}

/*!
 * @brief The dynamic programming version of jump decision.
 */
bool canJump2(int A[], int n)
{
	int maxjump = 1;
	for (int i = 0; i < n && i < maxjump; ++i) {
		maxjump = max(A[i]+i+1, maxjump);
	}
	return maxjump >= n;
}

