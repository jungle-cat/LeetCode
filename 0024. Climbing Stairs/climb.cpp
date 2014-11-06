/*
 * climb.cpp
 *
 *  You are climbing a stair case. It takes n steps to reach to the top.
 *  Each time you can either climb 1 or 2 steps. In how many distinct
 *  ways can you climb to the top?
 *
 *  Created on: 2014-11-6
 *      Author: Feng
 */

#include <vector>
using namespace std;

int climbStairs(int n)
{
	vector<int> c(n);
	c[0] = 1;
	c[1] = 2;

	for (int i = 2; i < n; i++)
		c[i] = c[i-1] + c[i-2];

	return c[n-1];
}

