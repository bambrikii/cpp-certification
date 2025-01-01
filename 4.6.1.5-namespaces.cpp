#include <iostream>

using namespace std;

namespace ns1 {
    int prop1 = 11;
    int prop2 = 12;
}

namespace ns2 {
    int prop1 = 21;
    int prop3 = 23;
    int prop4 = 24;
}

using namespace ns1;
using namespace ns2;

int main() {
//    cout << prop1 << endl; // reference to prop1 is ambiguous
    int prop4 = 44;
    cout << ns1::prop1 << endl;
    cout << ns2::prop1 << endl;
    cout << prop2 << endl;
    cout << prop3 << endl;
    cout << prop4 << endl;
    cout << ns2::prop4 << endl;
    return 0;
}