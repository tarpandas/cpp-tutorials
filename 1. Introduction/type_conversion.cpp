#include <iostream>
#include <typeinfo> // helps in checking datatype
using namespace std;

int main() {
    // implicit type conversion - automatic, narrowing conversion - data might be lost

    int a = 10;
    double b = a;
    cout << b << endl;

    double c = 9.99;
    int d = c;
    cout << d << " - Note: Here double to int conversion leads to data loss" << endl;

    // explicit type conversion - managed by the user, widening conversion.

    int e = 123;
    double f = (double) e; // explicitely casting
    cout << f << " - datatype - " << typeid(f).name() << endl;
    
    return 0;
}