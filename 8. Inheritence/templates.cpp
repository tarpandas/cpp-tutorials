/*
Templates:
They are in a sense parameterized class.
Promotes generic programming.

Syntax:
template <class T>
class Vector {
    T* arr;
    public:
        Vector (T* arr) {
            ...
        }
};

int main() {
    Vector <int> myVec (ptr);
    Vector <float> myFLoat (ptr);
    ...
}
*/

#include <iostream>
using namespace std;

template <class T>
class NumberRep {
    private:
        T num;
    public:
        NumberRep (T num) {
            this-> num = num;
        }
        void display() {
            cout << num << endl;
        }
};

int main() {
    NumberRep <int> myInt(45);
    NumberRep <float> myFloat(23.54f);
    NumberRep <char> myChar('H');

    myInt.display();
    myFloat.display();
    myChar.display();
    
    return 0;
}