/*
 * maxprofit.cpp
 *
 *  Say you have an array for which the ith element is the price of a given
 *  stock on day i. Design an algorithm to find the maximum profit. You may
 *  complete as many transactions as you like (ie, buy one and sell one share
 *  of the stock multiple times). However, you may not engage in multiple
 *  transactions at the same time (ie, you must sell the stock before you buy
 *  again).
 *
 *  Created on: 2014-10-22
 *      Author: Feng
 */


#include <vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
	if(prices.empty())
		return 0;

	int sum = 0;
	int prev = prices[0];
	for (vector<int>::size_type i = 1; i < prices.size(); ++i) {
		if(prev <= prices[i])
			sum += prices[i] - prev;
		prev = prices[i];
	}
	return sum;
}


