# C++ Primer 课后习题作业1

## 方豪 18061710

### P51:

### 练习2.23

​	不能判断指针p是否指向了一个合法的对象，因为如果指针p没有被初始化，p存放的是一个随机的地址。再者，如果p没有被合法的初始化，指针是否有效也不确定。



### 练习2.24

​	因为lp的类型是long，不是int，而void定义了一个空指针，void *是一种特殊的指针类型，可以用于存放任意对象的地址。



### P53:

### 练习2.25

​	(a)ip是一个int类指针型的，i是一个int型的变量，r是一个int型的引用。

​	(b)i是一个int型的变量，ip是一个空指针。

​	(c)ip是一个int类型的指针，ip2是一个int类型的变量。



### P62:

### 练习2.35

##### 	程序为2.35.cpp

​	j的类型是int，k为const int型引用，p为const int型指针，j2为const int型，k2为const int型引用。



### P81:

### 练习3.4

##### 	程序为3.4(1).cpp,3.4(2).cpp



### 练习3.5

##### 	程序为3.5(1).cpp,3.5(2).cpp



### P94:

### 练习3.20

##### 程序为3.20(1).cpp,3.20(2).cpp



### P188:

### 练习6.10

##### 程序为6.10.cpp



### P193:

### 练习6.19

​	(a)：函数只有一个参数，传入两个不合法

​	(b)：合法

​	(c)：合法

​	(d)：合法



### P210：

### 练习6.39

​	知识点1：函数的重载必须有形参数量或者形参类型上的不同

​	知识点2：顶层const不影响传入函数的对象

​	(a)：错误

​	(b)：错误

​	(c)：正确



### P241：

### 练习7.16

​	在类的定义中对于访问说明符出现的位置和次数没有限制。在整个程序内可被访问的chengy(如类的接口)应该定义在public说明符之后，不能被使用该类的代码访问的成员应该定义在private说明符之后。



### P249：

### 练习7.27

##### 程序为6.10.cpp，Screen.h



### P266：

### 练习7.49

(a)Sales_data &combine( Sales_data );

​	s隐式地调用Sales_data的构造函数，生成一个临时的Sales_data对象，然后传递给combine的形参。

(b)Sales_data &combine( Sales_data& );

​	编译无法通过。因为combine成员函数的形参是非常量引用，但是s自动创建的Sales_data临时对象无法传递给	combine所需的非常量引用。（PS：隐式转换生成的无名的临时对象是const的）

​	修改为：Sales_data &combine( const Sales_data& ) 

(c)Sales_data &combine( const Sale_data& ) const;

​	编译无法通过。因为我们把combine成员函数声明成了常量成员函数，所以该函数无法修改数据成员的值。


### P272:

### 练习7.58

​	除了静态常量成员之外，其他静态成员不能在类的内部初始化。所以rate和vec不能在类内初始化，rate和vec的	类外定义必须给出其初始值。