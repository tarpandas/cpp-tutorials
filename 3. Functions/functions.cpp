/*
Functions are blocks of codes, which avoid repeatation
Functions can be of four types:
    Function with no argument and no return value
    Function with no argument but return value
    Function with argument but no return value
    Function with argument and return value
*/
#include <iostream>
using namespace std;

void printLine1();
string printLine2();
void printLine3(string);
string printLine4(string);

void printLine1() {
    cout << "This function has no arguments or return values"<< endl;
}
string printLine2() {
    return "This function has no arguments, but has return values";
}
void printLine3(string output) {
    cout << output << endl;
}
string printLine4(string output) {
    return "This function has no arguments, " + output;
}

int main() {
    // functions with no arguments and return values:
    printLine1();

    // functions with no arguments but has return values:
    cout << printLine2() << endl;

    // function with arguments but no return values:
    printLine3("This function takes argument, but has no return value");

    // function with arguments and has no return values:
    cout << printLine4("but has return values") << endl;

    return 0;
}