/*
Default arguments:
If a function with default arguments is called without
passing arguments, then the default paramenter is used.
*/

#include <iostream>
using namespace std;

void display( char = '*', int = 3);
int main() {
    cout << "No argument passed: ";
    display();

    cout << "First argument passed: ";
    display('#');

    cout << "All arguments passed: ";
    display('$',5);

    return 0;
}
void display(char c, int i) {
    for(int j=0; j<i; j++) {
        cout << c;
    }
    cout << endl;
}

/*
Rules:
1. If an argument has default values, subsequent parameters have default values as well
    // Invalid
    void add(int a, int b = 3, int c, int d);

    // Invalid
    void add(int a, int b = 3, int c, int d = 4);

    // Valid
    void add(int a, int c, int b = 3, int d = 4);
2. It is ccompulsory to write function prototype before declaring default variables.
    // Invalid code

    int main() {
        // function call
        display();
    }

    void display(char c = '*', int count = 5) {
        // code
    }

*/