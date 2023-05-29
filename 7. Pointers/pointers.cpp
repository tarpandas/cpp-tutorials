#include <iostream>
using namespace std;
int main() {
    int * pointVar, var;

    cout << "Enter a number: " << endl;
    cin >> var;

    pointVar = &var;

    cout << "variable: " << var << endl;
    cout << "variable address: " << pointVar << endl;
    cout << "variable address contains: " << *pointVar << endl;
    
    return 0;
}