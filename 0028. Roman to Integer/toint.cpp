/*
 * toint.cpp
 *
 *  Given a roman numeral, convert it to an integer.
 *  Input is guaranteed to be within the range from 1 to 3999.
 *
 *  Created on: 2014-11-6
 *      Author: Feng
 */


#include <string>
using namespace std;

int romanToInt(string s)
{
	int map[26] = {0};
	map['I'-'A'] = 1;   map['V'-'A'] = 5;   map['X'-'A'] = 10;
	map['L'-'A'] = 50;  map['C'-'A'] = 100; map['D'-'A'] = 500;
	map['M'-'A'] = 1000;

	int res = 0, n = s.size();
	s.push_back(s[n-1]);
	for (int i = 0; i < n; ++i) {
		if (map[ s[i]-'A' ] >= map[ s[i+1]-'A' ])
			res += map[s[i]-'A'];
		else res -= map[s[i]-'A'];
	}
	return res;
}

