#include <iostream>
#include <string>

using namespace std;

void print_str(string& str) {
    cout << "---" << endl;
    cout << "length   = " << str.length() << endl;
    cout << "capacity = " << str.capacity() << endl;
    cout << "max_size = " << str.max_size() << endl;
}

int main() {
    string str = "somestring";
    print_str(str);
    for (int i=0; i< 25; i++) {
	str += "12345";
	print_str(str);
    }
    return 0;
}