// Copyright [2019] <Copyright fanghao>
class Sales_data
{
	friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
public:
	Sales_data& operator+=(const Sales_data &rhs);
	//其他成员
};

