// Copyright [2019] <Copyright fanghao>
#include <iostream>

int exchange(int *x, int *y) {
	int z;
	z = *x;
	*x = *y;
	*y = z;
	return 0;
}

int main() {
    std::cout << "��������Ҫ������������:";
	int a, b;
	std::cin >> a >> b;
	exchange(&a, &b);
	std::cout << "����֮���������" << a << " " << b << std::endl;
	return 0;
}

