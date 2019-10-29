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
    std::cout << "请输入需要交换的两整数:";
	int a, b;
	std::cin >> a >> b;
	exchange(&a, &b);
	std::cout << "交换之后的两数：" << a << " " << b << std::endl;
	return 0;
}

