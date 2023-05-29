/*
Pointers and References in C++ held close relation with one another.
The major difference is that the pointers can be operated on like adding values 
whereas references are just an alias for another variable.
*/
#include <iostream>
using namespace std;

int& returnValue(int&);

int main() {
    int a = 20;
    int& b = returnValue(a);

    cout << "a = " << a << " The address of a: " << &a << endl;

    cout << "b = " << b << " The address of a: " << &b << endl;

    returnValue(a) = 13;

    cout << "a = " << a << " The address of a: " << &a << endl;
    
    return 0;
}

int& returnValue(int& x) {
    cout << "x = " << x << " The address of x: " << &x << endl;

    return x;
}

/*
Since reference is nothing but an alias(synonym) of another variable,
the address of a, b and x never changes.
*/