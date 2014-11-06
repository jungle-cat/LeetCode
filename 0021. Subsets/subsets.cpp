/*
 * subsets.cpp
 *
 * Given a set of distinct integers, S, return all possible subsets.
 * Note:
 *     - Elements in a subset must be in non-descending order.
 *     - The solution set must not contain duplicate subsets.
 *
 * For example,
 *     If S = [1,2,3], a solution is:
 *         [
 *           [3],
 *           [1],
 *           [2],
 *           [1,2,3],
 *           [1,3],
 *           [2,3],
 *           [1,2],
 *           []
 *         ]
 *
 *  Created on: 2014-10-6
 *      Author: Feng
 */

#include <vector>
#include <algorithm>
using namespace std;



//vector<vector<int>> subsets(vector<int> &S)
//{
//	sort(S.begin(), S.end());
//	vector<vector<int>> rets(pow(2, S.size()));
//}
