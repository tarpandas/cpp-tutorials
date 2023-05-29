#include <iostream>
using namespace std;

class Car {
    public:
        string carName;
        string carColor;

        // No argument constructor

        Car() {
            this->carName = "Suzuki Alto";
            this->carColor = "Beige";
        }

        // Parameterized constructor

        Car(string carName, string carColor) {
            this->carName = carName;
            this->carColor = carColor;
        }

        // Capoy constructor

        Car(Car& car) {
            this->carName = car.carName;
            this->carColor = car.carColor;
        }
};

int main() {

    // creating an object with no var initialization

    Car car1;
    cout << "Car1:\nCar name: " << car1.carName << " , Car color: " << car1.carColor << endl;

    // creating an object with var initialization

    Car car2("Toyota Supra", "White");
    cout << "Car2:\nCar name: " << car2.carName << " , Car color: " << car2.carColor << endl;

    // using copy constructor

    Car car3("Hyundai i20", "Red");
    Car car4(car3);
    cout << "Car3:\nCar name: " << car4.carName << " , Car color: " << car4.carColor << endl;

    return 0;
}