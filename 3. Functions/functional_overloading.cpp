#include<iostream>
using namespace std;

int sum (int, int);
int sum (int, int, int);
float sum (float, float);

int main() {
    cout << "3 + 4 = " << sum (3,4) << endl;
    cout << "3 + 4 + 5 = " << sum (3,4,5) << endl;
    cout << "3.5 + 5.5 = " << sum (3.5f,5.5f) << endl;
    return 0;
}

int sum (int num1, int num2) {
    return num1 + num2;
}

int sum (int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

float sum (float num1, float num2) {
    return  (float) num1 + num2;
}