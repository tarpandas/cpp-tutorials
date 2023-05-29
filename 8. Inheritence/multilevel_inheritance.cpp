#include <iostream>
using namespace std;

class A {
    public:
        void func1() {
            cout << "This is from class A." << endl;
        }
};

class B: public A {
    public:
        void func2() {
            cout << "This is from class B."  << endl;
        }
};

class C: public B {
    public:
        void func3() {
            cout << "This is from class C." << endl;
        }
};

int main() {
    C object;
    object.func3();
    object.func2();
    object.func1();

    return 0;
}