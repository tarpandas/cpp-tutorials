#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    float salary;
};

void display(Person);

int main() {
    Person p1, p2;
    p1.name = "Manoj";
    p1.age = 24;
    p1.salary = 25000;

    p2.name = "Riya";
    p2.age = 22;
    p2.salary = 20000;

    display(p1);
    display(p2);

    return 0;
}

void display (Person p) {
    cout << "Name: " << p.name << ", Age: " << p.age << ", Salary: " << p.salary << endl;
}