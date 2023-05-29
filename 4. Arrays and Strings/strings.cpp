#include <iostream>
using namespace std;

int main() {
    char str1[4] = "C++";
    char str2[] = {'C','+','+','\0'};
    char str3[4] = {'C','+','+','\0'};

    cout << "1. Checking ways to declare a C++ string:" << endl;

    cout << "Pledging on the name of C++: " << endl;
    cout << str1 << ", " << str2 << ", " << str3 << endl;

    cout << "2. Getting string input:" << endl;

    char str4[100];
    cout << "Enter a line: ";
    cin.get(str4, 100);

    cout << "User input: " << str4 << endl;

    return 0;
}