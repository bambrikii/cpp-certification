#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    str1 = "ABCDEF";

    str2 = str1.substr(1, 1) + str1.substr(4) + str1.substr();
    cout << str2 << endl;

    str1 = str2.substr(1, 1) + str2.substr(4) + str2.substr();
    cout << str1 << endl;

    cout << (str2 < str1) << endl;

    return 0;
}