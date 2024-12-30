#include <iostream>
#include <bitset>

using namespace std;

int main() {
    short short1[] = {1, 0, -1, -32235};
    int short1_sz = sizeof(short1)/sizeof(short);
    for (int i=0; i < short1_sz; i++) {
	unsigned short ushort1 = short1[i];
	cout << "short -> ushort " << i << ": " << short1[i] << " -> " << ushort1 << endl;
	cout << "                   " << std::bitset<16>(short1[i]).to_string() << " -> " << std::bitset<16>(ushort1).to_string() << endl;
    }

    int int1[] = {1, 0, -1, -1294967295};
    int int1_sz = sizeof(int1)/sizeof(int);
    for (int i=0; i < int1_sz; i++) {
	unsigned int uint1 = int1[i];
	cout << "int -> uint " << i << ":     " << int1[i] << " -> " << uint1 << endl;
	cout << "                   " << std::bitset<32>(int1[i]).to_string() << " -> " << std::bitset<32>(uint1).to_string() << endl;
    }

    long long1[] = {1L, 0L, -1L, -4294967295};
    int long1_sz = sizeof(long1)/sizeof(long);
    for (int i=0; i < long1_sz; i++) {
	unsigned int ulong1 = long1[i];
	cout << "long -> ulong " << i << ":   " << long1[i] << " -> " << ulong1 << endl;
	cout << "                   " << std::bitset<64>(long1[i]).to_string() << " -> " << std::bitset<64>(ulong1).to_string() << endl;
    }

    return 0;
}