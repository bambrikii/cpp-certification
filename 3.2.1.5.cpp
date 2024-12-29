#include <iostream>

int main(int argc, char** argv) {
    int val[]{1, 2, 3};
    int* ref = val;
    std::cout << ref << " " << &ref << " " << *ref << std::endl;
    ref++;
    std::cout << ref << " " << &ref << " " << *ref << std::endl;
    ref-=2;
    std::cout << ref << " " << &ref << " " << *ref << std::endl;
    return 0;
}