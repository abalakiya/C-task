// Copyright [2019] <Copyright fanghao>
#include <iostream>  
#include <string>  
#include <vector> 
#include <utility>
using namespace std;
 
int main() { 
	vector<pair<string,int>> vec1(5);
	vector<int> vec2 = {1,2,3,4,5};
	vector<string> vec3 = {"abc","bcd","cde","def","efg"};
	for(int i=0;i<5;i++)
	{
		pair<int,string> p{vec2[i],vec3[i]};
		vec1.push_back(p);
	 } 
 
	vector<pair<string,int>>::iterator it1 = vec1.begin();
	cout<<"vectorÖÐÔªËØÎª£º"<<endl;
	for (it1; it1 != vec1.end(); ++it1)
	{
		cout<<it1->first<<" "<<it1->second<<endl;
	}
 
	return 0;  
}
