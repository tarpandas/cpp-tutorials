/*
Virtual Functions:
A virtual function is a member function in the base 
class that we expect to redefine in derived classes.
*/

#include <iostream>
using namespace std;

class Base {
    public:
        virtual void print() {
            cout << "Base function." << endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            cout << "Derived function" << endl;
        }
};

int main() {
    Derived derived;
    Base * base = &derived;
    base->print(); 
    return 0;
}