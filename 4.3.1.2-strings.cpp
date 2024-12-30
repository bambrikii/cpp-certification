#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "1";
    string str2 = str1;
    string& str3 = str1;
    cout << &str1 << endl;
    cout << &str2 << endl;
    cout << &str3 << endl;


    str1 += "2";
    cout << &str1 << " " << str1 << endl;
    

    return 0;
}