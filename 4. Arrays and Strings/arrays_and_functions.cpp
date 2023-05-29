#include <iostream>
using namespace std;

void display(int []);

int main() {
    
    int marks[5] = {89,78,90,76,88};
    display(marks);
    
    return 0;
}

void display(int m[5]) {
    cout << "Displaying marks: " << endl;

    // display array elements

    for(int i=0; i<5; i++) {
        cout << "Student "<< i+1 << ": " << m[i] << endl;
    }
}