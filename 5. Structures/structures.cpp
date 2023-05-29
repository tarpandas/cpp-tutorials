/*
Structures:
Structure is a collection of variables of different data types under a single name. 
It is similar to a class in that, both holds a collecion of data of different data types.

Members of structures are public by default, unlike classes where they are private by default.

Also, NULL values are possible in class, which are not possible in structures.

*/

#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    float salary;
};

int main() {
    Person p1, p2;
    p1.name = "Manoj";
    p1.age = 24;
    p1.salary = 25000;

    p2.name = "Riya";
    p2.age = 22;
    p2.salary = 20000;

    cout << "Employee 1:\n" << p1.name << " " << p1.age << " " << p1.salary << endl;
    cout << "Employee 2:\n" << p2.name << " " << p2.age << " " << p2.salary << endl;

    return 0;
}