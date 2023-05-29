#include <iostream>
using namespace std;

int main() {
    int *ptr, arr[5];

    cout << "Enter 5 numbers (integer): " << endl;
    for(int i=0; i<5; i++) {
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }

    ptr = arr;

    cout << "Elements are: "
        << *ptr << ", "
        << *(ptr + 1) << ", "
        << *(ptr + 2) << ", "
        << *(ptr + 3) << ", "
        << *(ptr + 4) << endl;

    return 0;
}