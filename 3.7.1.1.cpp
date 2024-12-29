int method1(int val1, int& val2) {
    val1++;
    val2++;
    return val1 + val2;
}

int main(int argc, char** argv) {
    int val0_1 = 1;
    int val0_2 = 2;
    int val0_3 = method1(val0_1, val0_2);
    return 0;
}