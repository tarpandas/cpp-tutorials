#include <iostream>
using namespace std;

int main() {
    // Creating a calculator
    int num1, num2;
    char symbol;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter the symbol (+, -, *, /, %): ";
    cin >> symbol;
    cout << "Enter number 2: ";
    cin >> num2;

    switch (symbol) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
            break; // Important otherwise this and the following conditions are also executed.
        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
            break;
        case '%':
            cout << num1 << " % " << num2 << " = " << num1%num2 << endl;
            break;
        default:
            cout << "Invalid input." << endl;
    }
    return 0;
}