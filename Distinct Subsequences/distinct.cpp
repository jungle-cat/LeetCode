/*
 * distinct.cpp
 *
 *  Given a string S and a string T, count the number of distinct subsequences
 *  of T in S.
 *  A subsequence of a string is a new string which is formed from the original
 *  string by deleting some (can be none) of the characters without disturbing
 *  the relative positions of the remaining characters. (ie, "ACE" is a subsequence
 *  of "ABCDE" while "AEC" is not).
 *
 *  Here is an example:
 *  S = "rabbbit", T = "rabbit"
 *  Return 3.
 *
 *  Created on: 2014-10-5
 *      Author: Feng
 */


#include <string>
#include <vector>
using namespace std;

int numDistinct(string S, string T)
{
	vector<vector<int>> tb(T.size()+1, vector<int>(S.size()+1));
	for (string::size_type i = 0; i <= S.size(); ++i)
		tb[0][i] = 1;

	for (string::size_type i = 1; i <= T.size(); ++i) {
		for (string::size_type j = 1; j <= S.size(); ++j)
			tb[i][j] = S[j-1] == T[i-1] ? tb[i-1][j-1] + tb[i][j-1] : tb[i][j-1];
	}
	return tb[T.size()][S.size()];
}

