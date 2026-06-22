#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12, 45, 7, 89, 23};
    int *p = arr;
    int largest = *p;

    for (int i = 1; i < 5; i++) {
        if (*(p + i) > largest)
            largest = *(p + i);
    }

    cout << "Largest = " << largest;

    return 0;
}