// Copyright [2019] <Copyright fanghao>
#include <iostream>
#include <list>
#include <deque>

int main() {
	std::list<int> list1(6,6);
	std::deque<int> deque1;
	std::deque<int> deque2;
	std::list<int>::iterator it1 = list1.begin();
	for (it1; it1 != list1.end(); it1++)
	{
		if ((*it1)%2 == 0)
		{
			deque1.push_back(*it1);
		} 
		else
		{
			deque2.push_back(*it1);
		}
	}
} 

