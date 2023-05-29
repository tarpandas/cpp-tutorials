/*
Dynamically allocating memory
Important keywords: new and delete
*/

#include <iostream>
using namespace std;

int main() {
    int *pointInt; float *pointFloat;

    pointInt = new int;
    pointFloat = new float;

    *pointInt = 23;
    *pointFloat = 25.7f;

    cout << "Random numbers: " << *pointInt << " " << *pointFloat;

    delete pointInt;
    delete pointFloat;

    return 0;
}