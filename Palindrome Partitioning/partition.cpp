/*
 * partition.cpp
 *
 *  Given a string s, partition s such that every substring of the partition
 *  is a palindrome. Return all possible palindrome partitioning of s.
 *
 *  For example, given s = "aab",
 *  Return
 *    [
 *      ["aa","b"],
 *      ["a","a","b"]
 *    ]
 *
 *  Created on: 2014-10-6
 *      Author: Feng
 */


#include <string>
#include <vector>
using namespace std;

bool isPalindrome(const string& s)
{
	if (s.empty())
		return true;
	for(string::size_type i = 0, j = s.size()-1; i < j; ++i, --j)
		if (s[i] != s[j]) return false;
	return true;
}

void partitionString(const string s, vector<string> l, vector<vector<string>>& rets)
{
	if (s.empty()) {
		rets.push_back(move(l));
		return;
	}

	for(vector<string>::size_type i = 1; i <= s.size(); ++i) {
		string a = s.substr(0, i);
		string b = s.substr(i, s.size()-i);


		if (isPalindrome(a)) {
			l.push_back(a);
			partitionString(b, l, rets);
			l.pop_back();
		}
	}
}

vector<vector<string>> partition(string s)
{
	vector<string> list;
	vector<vector<string>> rets;
	partitionString(s, list, rets);
	return move(rets);
}

