/*
Friend function:
A friend function can access the private and protected data of a class.
*/
#include <iostream>
using namespace std;

class Distance {
    private:
        int meter;

        // friend function
        friend int addTen(Distance);

    public:
        Distance() {
            meter = 0;
        }
};

int addTen (Distance d) {
    d.meter +=10;
    return d.meter;
}
int main() {
    Distance distance;
    cout << "Distance: " << addTen(distance);
    return 0;
}