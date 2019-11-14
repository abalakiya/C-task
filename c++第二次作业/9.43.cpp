// Copyright [2019] <Copyright fanghao>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void func(string &s, string &oldval, string &newval) { 
	int old_size = oldval.size();
	int new_size = newval.size();
	string::iterator beg = s.begin();   
	string::iterator b = newval.begin();
	string::iterator e = newval.end();  
	
	while (beg != s.end()-old_size+1)
	{
		string sample(beg, beg + old_size);
		if (sample == oldval)
		{
			beg = s.erase(beg, beg + old_size);
			beg = s.insert(beg, b, e);
			beg += old_size;
		}
		else
			++beg;
	}
}

int main() {
	string s = "thoabctho";
	string oldval = "tho";
	string newval = "though";
	func(s,oldval,newval);
	cout << s << endl;
	return 0;
}
