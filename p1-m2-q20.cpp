#include <iostream>
using namespace std;

int main() {
    int i = 1, j = i++, k = --i;
    cout << " line 1: i = " << i << ", j = " << j << ", k = " << k << endl;
    if (i > 0) {
	j++;
	k++;
    } else {
	k++;
	i++;
    }
    cout << " line 2: i = " << i << ", j = " << j << ", k = " << k << endl;
    if (k == 0) {
	i++;
	j++;
        cout << " line 3: i = " << i << ", j = " << j << ", k = " << k << endl;
    } else {
	if (k > 0) {
	    k--;
	} else {
	    k++;
	}
	i++;
        cout << " line 4: i = " << i << ", j = " << j << ", k = " << k << endl;
    }

    cout << " i = " << i << ", j = " << j << ", k = " << k << endl;
    cout << i * j * k << endl;

    cout << endl;
    return 0;
}