// Copyright [2019] <Copyright fanghao>
#include <iostream>
#include <string>
int main() {
	std::string str1, str2;
	while (std::getline(std::cin, str1))
	{
		str2 += str1;
		std::cout << str2 << std::endl;
	}
	return 0;
}
