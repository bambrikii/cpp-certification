#include <iostream>
#include <string>

using namespace std;

int main() {

    // insert

    string str1 = "0123456789", str2 = "abcdefgh";
    cout << str1 << " " << str2 << endl;

    str1.insert(3,2, ' ');
    cout << str1 << " " << str2 << endl;

    str1.insert(4, str2, 3, 2);
    cout << str1 << " " << str2 << endl;

    // assign

    string str3;
    str3.assign(5, '1');
    cout << str3 << endl;

    // replace

    string str4 = "012345678901234567890123456789";
    cout << str4 << endl;

    string str5 = "abcdefghijklmnopqrstuvwxyz";
    cout << str5 << endl;

    str4.replace(1, 2, str5, 3, 4);
    cout << str4 << endl;

    // erase

    string str6 = "0123456789";
    str6.erase(1, 2);
    cout << str6 << endl;

    // swap

    string str7 = "012345";
    string str8 = "abcdef";
    cout << str7 << " " << str8 << endl;
    str7.swap(str8);
    cout << str7 << " " << str8 << endl;

    return 0;
}
