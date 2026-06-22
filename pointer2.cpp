#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    int *p = &a;
    int *q = &b;

    int temp = *p;
    *p = *q;
    *q = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}

