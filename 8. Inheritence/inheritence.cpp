#include <iostream>
using namespace std;

class Animal {
    public:
        void eat() {
            cout << "I can eat." << endl;
        }
        void sleep() {
            cout << "I can sleep." << endl;
        }
};

class Dog : public Animal {
    public:
        void bark() {
            cout << "I can bark." << endl;
        }
};

int main() {
    Dog tommy;
    tommy.eat();
    tommy.sleep();
    tommy.bark();
}