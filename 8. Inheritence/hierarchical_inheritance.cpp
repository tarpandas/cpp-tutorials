#include <iostream>
using namespace std;

class Animal {
    public:
        void eat() {
            cout << "I can eat." << endl;
        }
};

class Dog: public Animal{
    public:
        void bark() {
            cout << "I bark." << endl;
        }
};

class Cat: public Animal{
    public:
        void meow() {
            cout << "I meow." << endl;
        }
};

int main() {
    Dog pet1;
    pet1.eat();
    pet1.bark();

    Cat pet2;
    pet2.eat();
    pet2.meow();
    
    return 0;
}