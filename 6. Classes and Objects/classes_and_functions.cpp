#include <iostream>
using namespace std;

// creating an object in a function

class Student {
    public:
        string fname;
        string lname;
        string id;

        void initObj(string fname, string lname, string id) {
            this->fname = fname;
            this->lname = lname;
            this->id = id;
        }
};

Student student() {
    Student student1;
    student1.initObj("Mukesh","Ambani","1001");

    cout << student1.id << " " << student1.fname << " " << student1.lname << endl;

    return student1;
}
int main() {
    Student s;
    s = student();

    return 0;
}