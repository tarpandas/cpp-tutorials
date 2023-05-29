#include <iostream>
using namespace std;

int main() {
    float num1;
    int sum = 0;
    int i = 0;

    const int LIMIT = 10;

    for (i=0; i<LIMIT; i++) {
        cout << "Enter a number: ";
        cin >> num1;
        if(num1 < 0.0)
            goto jump;
        sum += num1;
    }

    jump:
    cout << "Number entered is less than 0"<< endl;
    cout << "Average of positive numbers = " << (float) sum/i << endl;
    return 0;
}