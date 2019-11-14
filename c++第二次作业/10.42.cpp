// Copyright [2019] <Copyright fanghao>
#include<iostream>  
#include<string>  
#include<list>
using namespace std;
 
int main() { 
	string a[10] = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
	list<string> list1(a,a+10);
	list1.sort();
	list1.unique();
	list<string>::iterator it1;
	for (it1 = list1.begin(); it1 != list1.end(); ++it1)
	{
		cout<<*it1<<" ";
	}
 
	return 0;  
}
