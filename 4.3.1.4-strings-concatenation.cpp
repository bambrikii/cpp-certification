#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "1";
    cout << &str1 << " " << (str1.c_str())  << " " << (str1.data())<< endl;

    str1 = "a" + str1;
    cout << &str1 << " " << (str1.c_str())  << " " << (str1.data())<< endl;

//    str1 = "a" + "b"; // error: invalid operands of types ‘const char [2]’ and ‘const char [2]’ to binary ‘operator+’
//    cout << &str1 << " " << (str1.c_str())  << " " << (str1.data())<< endl;

    return 0;
}