#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p = &x;

    cout << "Address of x = " << p;

    return 0;
}