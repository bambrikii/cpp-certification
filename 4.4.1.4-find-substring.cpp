#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "abc";

    cout << "abc - d    " << s.find("d") << endl;
    cout << "abc - abcd " << s.find("abcd") << endl;
    cout << "abc - abc  " << s.find("abc") << endl;
    cout << "abc - bc   " << s.find("bc") << endl;
    cout << "abc - a    " << s.find("a") << endl;
    cout << "abc - b    " << s.find("b") << endl;
    cout << "abc - c    " << s.find("c") << endl;
    cout << "abc -      " << s.find("") << endl;

    return 0;
}