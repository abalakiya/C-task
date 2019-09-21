// Copyright [2019] <Copyright fanghao>
#include <iostream>
#include <string>
int main() {
	std::string str1, str2;
	std::cin >> str1 >> str2;
	if (str1 != str2) {
		std::cout << (str1 >= str2 ? str1 : str2) << std::endl;
	}
	return 0;
}
