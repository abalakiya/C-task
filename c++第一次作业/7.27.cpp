// Copyright [2019] <Copyright fanghao>
#include<iostream>
#include"Screen.h"

int main()
{
	Screen myScreen(5, 5, 'X');
	myScreen.cursor_move(4, 0).set_ch('#').display();
	std::cout << "\n";
	myScreen.display();
	std::cout << "\n";
	return 0;
}
