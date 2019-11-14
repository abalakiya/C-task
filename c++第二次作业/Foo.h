// Copyright [2019] <Copyright fanghao>
#ifndef FOO_H
#define FOO_H

#include <vector>
#include <iostream>

class Foo {
public:
    Foo sorted()&&;
    Foo sorted() const&;
 
private:
    vector<int> data;
};

#endif

