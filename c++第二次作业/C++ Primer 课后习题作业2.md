# C++ Primer 课后习题作业2

## 方豪 18061710

### P301

### 练习9.1

`vector`<int> vec;    // 1个0

vector<int> vec(3);    // 3个0

vector<int> vec(10,1);    // 10个1

vector<int> vec{1,2,3,4,5};   // 1,2,3,4,5

vector<int> vec(vec1);   // 与vec1相同

vector<int> vec(vec1.begin(), vec1.end());   //与vec1相同



### P309:

### 练习9.20

代码**9.20.cpp**



### P315:

### 练习9.29

resize(100)会将其大小改为100个元素的大小，添加新元素并初始化，之后使用resize(10)会将之后的90个元素舍弃。



### P324:

### 练习9.43

代码**9.43.cpp**



### P331:

### 练习9.52

代码**9.52.cpp**



### P339:

### 练习10.3

代码**10.3.cpp**



### P349:

### 练习10.15

`[a](int &b){cout<<a+b;} ` 



### P365：

### 练习10.34

代码**10.34.cpp**



### P370：

### 练习10.42

代码**10.42.cpp**



### P381：

### 练习11.12

代码**11.12.cpp**



### P383：

### 练习11.17

`copy(v.begin(),v.end(),inserter(c,c.end()));//正确 
copy(v.begin(),v.end(),back_inserter(c)); //错误 multiset没有push_back这个操作，尾插法不适合 
copy(c.begin(),c.end(),inserter(v,v.end()));//正确 
copy(c.begin(),c.end(),back_inserter(v));//正确 `




### P396:

### 练习11.38

代码**11.38(1).cpp和11.38(2).cpp**

文件 **map_file.txt** 和 **data_input.txt** 



### P446:

### 练习13.12

当指向一个对象的引用或者指针离开作用域是，析构函数并不会执行

析构函数执行三次：accum，item1，item2



### P452:

### 练习13.18

代码**13.18.cpp和13.18.h**



### P472:

### 练习13.46

int f();

vector<int> vi(100);

int&& r1 = f();// f()为函数的返回值，临时值，属于右值，&& 

int& r2 = vi[0];// vi[0]为变量，属于左值，& 

int& r3 = r1;// r1为变量，属于左值，& 

int&& r4 = vi[0] * f();// 右侧为表达式，属于右值，&& 



### P481:

### 练习13.49

代码**StrVec.cpp,  String.cpp，Message.cpp**



### P485:

### 练习13.58

代码**Foo.cpp,Foo.h,13.58.cpp**



### P493:

### 练习14.3

`"cobble"=="stone"    //const char*`
`svec1[0]==svec2[0]    //string版本`
`svec1==svec2          //vector版本`
`svec1[0]=="stone"     //string版本`



### P500:

### 练习14.20

代码**Sales_data.h和Sales_data.cpp**



### P509:

### 练习14.38

代码**StrLenIs.h和14.38.cpp**



### P522:

### 练习14.52

`struct longDouble {`
	`//用于演示的成员operator+; 在通常情况下+s是个非成员`
	`longDouble operator+(const SmallInt&);`
	`//其他成员与14.9.2节一致`
`};`
`longDouble operator+(longDouble&, double);`
`SmallInt si;`
`longDouble ld;`
`ld = si + ld;`
`ld = ld + si;`

**ld=si+ld：**由于LongDouble不能转换为SmallInt，因此Smallint的成员operator+和friend operator都不可行。由于Smallint不能转换为LongDouble，LongDouble的成员operator+和非成员operator+也都不可行。由于SmallInt可以转换为int， LongDouble了可以转换为float和double，所以内置的operator+(int, float)和operator+(int, double)都可行，会产生二义性。

**ld=ld+si：**类似上一个加法表达式，由于Smallint不能转换为double，LongDouble也不能转换为SmallInt，因此SmallInt的成员operator+和两个非成员operator+都不匹配。LongDouble的成员operator+可行，且为精确匹配。SmallInt可以转换为int，longDouble可以转换为float和double，因此内置的operator+(float, int)和operator(double, int)都可行。但它们都需要类型转换，因此LongDouble的成员operator+优先匹配。



### P539:

### 练习15.12

 有必要，override意味着重载父类中的虚函数，final意味着禁止子类重载该虚函数。两个用法并不冲突。 



### P542:

### 练习15.16

代码 **Limit_quote .h**



### P562:

### 练习15.30

代码**Basket.cpp和Basket.h**

