#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    if(n < 0) {
        cout << "The number entered is negative." << endl;
        return 1;
    }

    result = factorial(n);

    cout << "Factorial of " << n << " is " << result << endl;

    return 0;
}

int factorial(int n) {
    if(n > 1) {
        return n * factorial(n-1);
    } else {
        return 1;
    }
}

/*
Advantages of C++ Recursion
    It makes our code shorter and cleaner.
    Recursion is required in problems concerning data structures and advanced algorithms, such as Graph and Tree Traversal.
Disadvantages of C++ Recursion
    It takes a lot of stack space compared to an iterative program.
    It uses more processor time.
    It can be more difficult to debug compared to an equivalent iterative program.

*/