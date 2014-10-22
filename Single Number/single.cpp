/*
 * single.cpp
 *
 *  Given an array of integers, every element appears twice except for one.
 *  Find that single one.
 *
 *  Note:
 *      Your algorithm should have a linear runtime complexity.
 *      Could you implement it without using extra memory?
 *
 *  Created on: 2014-10-22
 *      Author: Feng
 */


int singleNumber(int A[], int n)
{
	int mask = 0x0;
	while(n--) {
		mask ^= A[n];
	}

	return mask;
}
