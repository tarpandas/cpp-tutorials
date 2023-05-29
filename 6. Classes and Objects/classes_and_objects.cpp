#include <iostream>
using namespace std;

class Room {
    private:
        double length;
        double height;
        double width;

    public:
        void setDimension (double length, double height, double width) {
            this->length = length;
            this->height = height;
            this->width = width;
        }

        double calculateArea () {
            return length * width;
        }

        double calculateVolume() {
            return length * width * height;
        }
};

int main() {
    Room room1;
    room1.setDimension (42.5, 19.2, 30.8);

    cout << "Area of the room: " << room1.calculateArea() << " sq. m."<< endl;
    cout << "Volumn of the room: " << room1.calculateVolume() << " cubic m." << endl;

    return 0;
}