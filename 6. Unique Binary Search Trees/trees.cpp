/*
 * trees.cpp
 *
 *  Given n, how many structurally unique BST's (binary search trees)
 *  that store values 1...n?
 *
 *  For example,
 *    Given n = 3, there are a total of 5 unique BST's.
 *       1         3     3      2      1
 *        \       /     /      / \      \
 *         3     2     1      1   3      2
 *        /     /       \                 \
 *       2     1         2                 3
 *
 *  Created on: 2014-11-4
 *      Author: Feng
 */

#include <vector>
using namespace std;


int numTrees(int n)
{
	vector<int> c(n+1, 1);
	for (vector<int>::size_type k = 2; k < c.size(); ++k) {
		int sum = 0;
		for (int i = 0; i < k; ++i)
			sum += c[i] * c[k-1-i];
		c[k] = sum;
	}
	return c.back();
}


