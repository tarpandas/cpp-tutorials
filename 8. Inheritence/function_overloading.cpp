#include <iostream>
using namespace std;

class Base {
    public:
        void print() {
            cout << "Base class print()." << endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            cout << "Derived class print()." << endl;
            Base::print(); // call overriden function from derived class
        }
};

int main() {
    Derived object;
    object.print();
    object.Base :: print();

    // calling overriden function using pointer
    Derived derived;
    Base *ptr1 = &derived;
    ptr1-> print();
    Derived *ptr2 = &derived;
    ptr2-> print();

    return 0;

}