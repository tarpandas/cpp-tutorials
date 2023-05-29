/*
Question:
Assigning grades (A, B, C) based on marks obtained by a student.
    if the percentage is above 90, assign grade A
    if the percentage is above 75, assign grade B
    if the percentage is above 65, assign grade C
*/
#include <iostream>
using namespace std;

int main() {
    float marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks > 0 && marks <= 100) { // the condition checks whether the marks stay between 0 to 100
        if (marks > 90)
            cout << "Grade: 'A'";
        else if (marks > 80)
            cout << "Grade: 'B'";
        else if (marks > 65)
            cout << "Grade: 'C'";
        else
            cout << "Fail";
    }

    return 0;
}