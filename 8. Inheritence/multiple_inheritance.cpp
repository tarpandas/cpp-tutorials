#include <iostream>
using namespace std;

class A {
    public:
        void print() {
            cout << "This is print() function from class A." << endl;
        }
};

class B {
    public:
        void print() {
            cout << "This is print() function from class B." << endl;
        }
};

class C : public A, public B {};

int main() {
    C object;

    // To remove overriding ambiguity (similar to JAVA), we use scope resolution operator
    object.A :: print();
    object.B :: print();

    return 0;
}