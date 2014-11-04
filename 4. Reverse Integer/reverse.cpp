/*
 * reverse.cpp
 *
 *  Reverse digits of an integer.
 *  Example1: x = 123, return 321
 *  Example2: x = -123, return -321
 *
 *  Created on: 2014-10-22
 *      Author: Feng
 */


int reverse(int x)
{
	int rev = 0;
	while (x) {
		rev = rev*10 + x % 10;
		x /= 10;
	}
	return rev;
}


