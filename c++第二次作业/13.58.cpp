// Copyright [2019] <Copyright fanghao>
#include <vector>
#include <iostream>
#include "Foo.h"

int main() {
    Foo().sorted(); // call "&&"
    Foo f;
    f.sorted(); // call "const &"
}
