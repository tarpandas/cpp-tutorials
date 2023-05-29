/*
public class - members of the parent are derived as they are.
protected class - can only be accessed by derived classes and friend classes/functions.
private class - all the members in the base class becomes private members in the derived class.
*/

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

class Cat: protected Animal {
    public:
        void meow() {
            cout << "I can meow." << endl;
        }
};

class Horse: private Animal {
    public:
        void neigh() {
            cout << "I can neigh." << endl;
        }
};

int main() {
    Dog tommy;
    tommy.eat();
    tommy.sleep();
    tommy.bark();

    Cat vincent;
    //vincent.eat(); // 'Animal' is not an accessible base of 'Cat'  
    //vincent.sleep(); // 'Animal' is not an accessible base of 'Cat'  
    vincent.meow();

    Horse hurk;
    //hurk.eat(); // 'Animal' is not an accessible base of 'Horse'
    //hurk.sleep(); // 'Animal' is not an accessible base of 'Horse'
    hurk.neigh();

    return 0;
}