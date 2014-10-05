/*
 * reverse.cpp
 *
 *  https://oj.leetcode.com/problems/reverse-words-in-a-string/
 *
 *  Given an input string, reverse the string word by word.
 *  For example,
 *  Given s = "the sky is blue",
 *  return "blue is sky the".
 *
 *  Created on: 2014-10-4
 *      Author: Feng
 */

#include <string>
#include <iostream>
using namespace std;

template <typename BidirIter>
void reverse(BidirIter begin, BidirIter end)
{
	while (begin != end && begin != --end)
		swap(*begin++, *end);
}

void reverseWords(string& s)
{
	string ss;

	for (int i = s.length()-1; i >= 0; --i) {
		cout << ss << endl;
		while (i >= 0 && s[i] == ' ') --i;
		if (i < 0) break;
		if (!ss.empty())
			ss.push_back(' ');
		string t;
		while (i >= 0 && s[i] != ' ') t.push_back(s[i--]);
		reverse(t.begin(), t.end());
		ss.append(t);
	}
	s = ss;
}


