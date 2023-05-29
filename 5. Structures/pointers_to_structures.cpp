#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

int main() {
    Distance *ptr, p;

    ptr = &p;

    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout << "Enter inches: ";
    cin >> (*ptr).inches;

    cout << "Displaying information: "<< endl;
    cout << "User input: " << (*ptr).feet << " feet and " << (*ptr).inches << " inches." << endl;
    cout << "Length in inches: " << (((*ptr).feet * 12) + (*ptr).inches) << " inches." << endl;
    cout << "Centimeters: " << (((*ptr).feet * 12) + (*ptr).inches) * 2.54 << " cm." << endl;

    return 0;
}