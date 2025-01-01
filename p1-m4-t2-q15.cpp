#include <iostream>
#include <string>

using namespace std;

int main() {

    int i = 2;
    float f = 4.4;

//    cout << f % float(i) << endl;
    cout << int(f) % i << endl;
    cout << 1L % i << endl;

    return 0;
}