#include <iostream>
using namespace std;

int main() {
    bool yes = !false;
    bool no = !yes;
    if (!no)
	cout << "true";
    else
	cout << "false";
    cout << endl;
    return 0;
}