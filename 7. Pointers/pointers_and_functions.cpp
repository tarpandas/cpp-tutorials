// Swapping two numbers
#include <iostream>
using namespace std;

void swap(int *, int *);

int main() {
    int iVar1, iVar2;

    cout << "Enter number 1: ";
    cin >> iVar1;

    cout << "Enter number 2: ";
    cin >> iVar2;

    cout << "Before Swapping:" << endl;

    cout << "Number 1: " << iVar1 << " Address: " << &iVar1 << endl;
    cout << "Number 2: " << iVar2 << " Address: " << &iVar2 << endl;

    swap(&iVar1, &iVar2);

    cout << "After Swapping:" << endl;

    cout << "Number 1: " << iVar1 << " Address: " << &iVar1 << endl;
    cout << "Number 2: " << iVar2 << " Address: " << &iVar2 << endl;

    return 0;
}

void swap (int *iVar1, int *iVar2) {
    int temp = *iVar1;
    *iVar1 = *iVar2;
    *iVar2 = temp;
}