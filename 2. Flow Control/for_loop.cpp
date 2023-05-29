/*
Questions:
Print a for loop for reading elements of an array
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string student_names [] = {"Rohan", "Vishal", "Karan", "Sourav", "Simran"};
    float marks [] = {78.5f, 76.0f, 89.5f, 92.0f, 90.0f};

    cout << "Student marks in 'X' class: " << endl;
    for (int i=0; i<5; i++) { // for (initializer, limit, increment)
        cout << student_names[i] << " : " << marks[i] << endl;
    }

    return 0;
}