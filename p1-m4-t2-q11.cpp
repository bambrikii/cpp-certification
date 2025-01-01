#include <iostream>
#include <string>

using namespace std;

int main() {

    string s1 = "ab";
    string s2 = "Abc";

    cout << s1.compare(s2) << endl;
    cout << (s1 > s2) << endl;

    if (s1 > s2) {
	cout << "yes" << endl;
    } else {
	cout << "no" << endl;
    }

    string s3 = "a";
    string s4 = "A";
    cout << (s3.compare(s4)) << " " << (s3 > s4) << endl;

    return 0;
}