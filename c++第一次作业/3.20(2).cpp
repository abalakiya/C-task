// Copyright [2019] <Copyright fanghao>
#include <iostream>
#include <vector>

int main() {
	std::vector<int> v;
	int a, sum;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < 5; i++)
	{
		sum = v[i] + v[9 - i];
		std::cout << sum << " ";
	}
	return(0);
}
