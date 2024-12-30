#include <iostream>

using namespace std;

int main() {
    int int1 = 2;
    char char1 = 3;
    short short1 = 4;
    float float1 = 5.6;

    int1 = short1 + char1 + float1;
    cout << int1 << endl;

    int1 = int(double(int(short1) + int(char1)) + double(float1));
    cout << int1 << endl;

    return 0;
}