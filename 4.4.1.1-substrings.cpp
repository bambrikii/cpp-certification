#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "0123456789";
    cout << str1.substr(1, 2) << endl;
    cout << str1.substr(1) << endl;
    cout << str1.substr(1, 12) << endl;
    cout << str1.substr() << endl;
//    cout << str1.substr(-2, -5) << endl;
//    cout << str1.substr(-2, 5) << endl;
//    cout << str1.substr(-2) << endl;
    return 0;
}