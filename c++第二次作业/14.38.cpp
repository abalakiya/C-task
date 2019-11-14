// Copyright [2019] <Copyright fanghao>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "StrLenIs.h"
using namespace std;
  
void readStr(istream &is, vector<string> &vec)
{
	string word;
	while (is >> word)
	{
		vec.push_back(word);
	}
}
 
int main() {
	vector<string> vec;
	readStr(cin, vec);
	const int minLen = 1;
	const int maxLen = 10;
	for (int i = minLen; i <= maxLen; ++i)
	{
		StrLenIs slenIs(i);
		cout << "len: " << i << ", cnt: " << count_if(vec.begin(), vec.end(), slenIs) << endl;
	}
	return 0;
}
