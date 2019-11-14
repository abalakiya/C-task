// Copyright [2019] <Copyright fanghao>
/*
*说明：
1.扫描表达式
  a.如果 token 是 "+" ,"-","*","/"
     a1.符号栈为空，直接入栈
	 a2.符号栈不空，比较token和栈顶符号的优先级
	    如果token的优先级高，直接入栈
		否则将栈里面的符号出栈，并和数字栈进行计算，设置新的栈顶符号和优先级，一直到优先级低的全部弹出栈，循环停止 ，新的符号入栈
  b.如果 token是 "(",直接入栈
  c. 如果token是")"
          当stack_opt.top != "("，既没有找到最近的和右括号匹配的左括号
		  操作符弹出栈，并和操作数计算
		  最后将"C"也弹出去
		  ”）“不进栈，它的出现是为了消除掉最近的左括号） //循环外的pop是将左括号丢弃 
  d.剩下的情况就都是数字，直接进入操作数栈 
*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;
 
int priority(string opt)
{
	int p = 0;
	if(opt == "(")
		p = 1;
	if(opt == "+" || opt == "-")
		p = 2;
	if(opt == "*" || opt == "/")
		p = 3;
	return p;
}
 
void calculate(stack<int> &opdstack, string opt)
{
	if(opt == "+")
	{
		int ropd = opdstack.top();
		opdstack.pop();
		int lopd = opdstack.top();
		opdstack.pop();
		int result = lopd + ropd;
		opdstack.push(result);
	}
	if(opt == "-")
	{
		int ropd = opdstack.top();
		opdstack.pop();
		int lopd = opdstack.top();
		opdstack.pop();
		int result = lopd - ropd;
		opdstack.push(result);
	}
	if(opt == "*")
	{
		int ropd = opdstack.top();
		opdstack.pop();
		int lopd = opdstack.top();
		opdstack.pop();
		int result = lopd * ropd;
		opdstack.push(result);
	}
	if(opt == "/")
	{
		int ropd = opdstack.top();
		opdstack.pop();
		int lopd = opdstack.top();
		opdstack.pop();
		int result = lopd / ropd;
		opdstack.push(result);
	}
}
  
int calcuExpression(vector<string> vec)
{
	stack<int> stack_opd;
	stack<string> stack_opt;
	
	for(int i = 0; i != vec.size(); ++i)
	{
		string token = vec[i];
		if(token == "+" || token == "-" || token == "*" || token == "/")
		{
			if(stack_opt.size() == 0)
				stack_opt.push(token);
			else
			 {
			 	int token_p = priority(token);
			 	string top_opt = stack_opt.top();
			 	int opt_p = priority(top_opt);
			 	if(token_p > opt_p)
			 		stack_opt.push(token);
			 	else
			 	  {
			 	  	while(token_p <= opt_p)
			 	  	{
			 	  		stack_opt.pop();
			 	  		calculate(stack_opd, top_opt);
			 	  		if(stack_opt.size() > 0)
			 	  		{
			 	  			top_opt = stack_opt.top();
			 	  			opt_p = priority(top_opt);
						   }
						else
						 	break;
					  }
					  stack_opt.push(token);
				   }
			 }
		}
		
		else if(token == "(")
			stack_opt.push(token);
		else if(token == ")")
		{
			while(stack_opt.top() != "(")
			{
				string top_opt = stack_opt.top();
				calculate(stack_opd,top_opt);
				stack_opt.pop();
			}
			stack_opt.pop();
		}
		else
		  stack_opd.push(atoi(token.c_str()));  
	}
	
	while(stack_opt.size() != 0)
	{
		string top_opt = stack_opt.top();
		calculate(stack_opd,top_opt);
		stack_opt.pop();
	}
	return stack_opd.top();
}
 
int main() {
	vector<string> tokens =  {"(","1","+","2",")","*","3","/","(","2","-","1",")"};
	for(auto i = 0; i != tokens.size(); ++i)
    cout << tokens[i] << " ";
    cout << endl;
    cout << calcuExpression(tokens) << endl;
	return 0;
}

