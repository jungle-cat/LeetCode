/*
 * sum.cpp
 *
 *  https://oj.leetcode.com/problems/two-sum/
 *
 *	Given an array of integers, find two numbers such that they add up to a specific target number.
 *	The function twoSum should return indices of the two numbers such that they add up to the target,
 *	where index1 must be less than index2. Please note that your returned answers (both index1 and
 *	index2) are not zero-based.
 *
 *	You may assume that each input would have exactly one solution.
 *
 *	Input: numbers={2, 7, 11, 15}, target=9
 *	Output: index1=1, index2=2
 *
 *  Created on: 2014-10-4
 *      Author: Feng
 */

#include <vector>
#include <algorithm>
#include <memory>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target)
{
	vector<int> ret(2);
	unordered_map<int, int> mp;

	for (int i = 0; i < numbers.size(); ++i) {
		int t = target - numbers[i];
		if (mp.count(t)) {
			ret[0] = mp[t]+1;
			ret[1] = i + 1;
			break;
		}
		mp[numbers[i]] = i;
	}
	return move(ret);
}

