#include <iostream>
using namespace std;

int main() {
    float val = 100.0;
    do {
	val = val / 5;
	cout << "*" << val;
    } while (val > 1.0);
    return 0;
}