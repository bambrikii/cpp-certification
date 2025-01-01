#include <iostream>
#include <string>

using namespace std;

int main() {
    char t[3][3], *p = (char*)t;

    for (int i = 0; i<9; i++) {
	*p++ = 'a' + i;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
	    cout << "t[" << i << "][" << j << "] = " << t[i][j] <<" ";
	}
	cout << endl;
    }
    cout << endl;

    cout << "t[1][1] = " << t[1][1] << endl;

    return 0;
}