#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "somestr";
    for (int i = 0; i < str.length(); i++) {
	str[i] = str[i] - 'a' + 'A';
	cout << str << endl;
    }
    return 0;
}