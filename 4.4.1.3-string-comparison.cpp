#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "abc";

    cout << "b[1, 1] " << s.substr(1, 1) << endl;

    cout << "b - bc " << s.compare(1, 1, "bc") << endl;
    cout << "b - a  " << s.compare(1, 1, "a") << endl;
    cout << "b - b  " << s.compare(1, 1, "b") << endl;
    cout << "b - c  " << s.compare(1, 1, "c") << endl;
    cout << "b -    " << s.compare(1, 1, "bc", 2, 2) << endl;

    return 0;
}