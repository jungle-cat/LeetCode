/*
 * single.cpp
 *
 *  Given an array of integers, every element appears three times except
 *  for one. Find that single one.
 *
 *  Note:
 *    Your algorithm should have a linear runtime complexity. Could you
 *    implement it without using extra memory?
 *
 *  Created on: 2014-11-6
 *      Author: Feng
 */


int singleNumber(int A[], int n)
{
	int one = 0, two = 0, three = 0;
	for (int i = 0; i < n; ++i) {
		two |= A[i];
		two ^= A[i];

		three = one & two;
		one &= ~three;
		two &= ~three;
	}
	return one;
}

