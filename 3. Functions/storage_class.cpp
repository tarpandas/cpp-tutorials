/*
Variable storage types:
    -- Local variable
    -- Global variable
    -- Static local variable
    -- Register variable
    -- Thread local variable
*/
#include <iostream>
using namespace std;
void test();
void staticVarTest();

int globalVar = 25; // Global variables: can be used everywhere in this program
int main() {
    test();
    cout << "Global Variable in main function: "<< globalVar << endl;

    /*
    Static variables:
        A static local variable exists only inside a function 
        where it is declared (similar to a local variable) but 
        its lifetime starts when the function is called and ends 
        only when the program ends.
    */

    staticVarTest();
    staticVarTest();

    /*
    Register variables:
        Register variables are similar to automatic variables
        and exists inside a particular function only.
        It is supposed to be faster than the local variables.
    */

    register int regVar = 30;
    cout << "Register Variable: " << regVar << endl;

    /*
    Thread Local Storage:
        Thread-local storage is a mechanism by which variables
        are allocated such that there is one instance of the
        variable per extant thread.
        Keyword 'thread_local' is used for this purpose.
    */

    return 0;
}
void test() {
    int localVar = 20;
    cout << "Local Variable: " << localVar << endl;
    // Local variable: cannot be used outside this scope.

    cout << "Global Variable inside function: " << globalVar << endl;
}
void staticVarTest() {
    static int staticVar = 20;
    cout << "Static Variable: " << staticVar << endl;
    staticVar++;
}