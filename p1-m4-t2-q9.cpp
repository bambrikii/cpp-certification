#include <iostream>
#include <string>

using namespace std;

int main() {

    float *ft[3] = { new float[3], new float[3], new float[3]}, *p;
    for (int i = 0; i < 3; i++) {
	p = ft[i];
	*p = p[1] = *(p + 2) = 10 * i;
    }

    for (int i = 0; i<3;i++) {
	cout << "ft[" << i << "] = " << *ft[i] << endl;
    }
    cout << endl;

    for (int i = 0; i<3;i++) {
	for (int j=0;j<3;j++) {
	    cout << "ft[" << i << "][" << j << "] = " << ft[i][j] << endl;
	}
    }
    cout << endl;

    cout << "ft[1][1] = " << ft[1][1];

    delete [] ft[0];
    delete [] ft[1];
    delete [] ft[2];

    return 0;
}