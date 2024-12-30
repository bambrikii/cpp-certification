#include <iostream>

using namespace std;

int main(void) {
    bool ints = sizeof(long) >= sizeof(int) && sizeof(int) >= sizeof(short);
    bool floats = sizeof(double) < sizeof(float);
    bool chars = sizeof(char) == 1;
    int v = ints && floats && chars;
    cout << "ints = " << ints << ", floats = " << floats << ", chars = " << chars << endl;
    cout << v << endl;
    return 0;
}