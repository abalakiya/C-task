#include<iostream>
#include <string>

class Screen
{
public:
	typedef std::string::size_type pos;
	//构造函数
	Screen() = default;
	Screen(const pos ht, const pos wt) : height(ht), width(wt), contents(ht * wt, ' ') { }
	Screen(const pos ht, const pos wt, const char c) : height(ht), width(wt), contents(ht * wt, c) { }
public:
	//成员函数
	Screen& cursor_move(const pos r, const pos c)
	{
		cursor = r * width + c;
		return *this;
	}
	Screen& set_ch(const pos r, const pos c, const char ch)
	{
		contents[r * width + c] = ch;
		return *this;
	}
	Screen& set_ch(const char ch)
	{
		contents[cursor] = ch;
		return *this;
	}
	Screen& display(void)
	{
		std::cout << contents;
		return *this;
	}

private:
	//数据成员
	std::string contents;
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
};

