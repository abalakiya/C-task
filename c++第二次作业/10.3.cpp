// Copyright [2019] <Copyright fanghao>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
 
int main() {
	int a[10] = {0,1,2,5,4,5,4,5,4,5};
	vector<int> vec(a,a+10);
	cout<<"元素之和为："<<accumulate(vec.begin(),vec.end(),0);
	return 0;
}
