// Copyright [2019] <Copyright fanghao>
#include "Foo.h"
#include <iostream>
#include <vector>

Foo Foo::sorted() &&
{
    sort(data.begin(), data.end());
    std::cout << "&&" << std::endl; // debug
    return *this;
}
 
Foo Foo::sorted() const &
{
    //    Foo ret(*this);
    //    sort(ret.data.begin(), ret.data.end());
    //    return ret;
 
    std::cout << "const &" << std::endl; // debug
 
    //    Foo ret(*this);
    //    ret.sorted();     // Exercise 13.56
    //    return ret;
 
    return Foo(*this).sorted(); // Exercise 13.57
}
