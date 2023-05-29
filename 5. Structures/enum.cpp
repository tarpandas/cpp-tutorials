/*
Enumeration:
An enumeration is a user-defined data type that 
consists of integral constants. 
*/
#include <iostream>
using namespace std;

enum week {Sunday, Monday, TUesday, Wednesday, Thursday, Friday, Saturday};
enum season {Summer = 23, Rainy=45, Autumn=2, Winter=453};

void weekdays() {
    week today;
    today = Thursday;
    cout << "Day: " << today+1 << endl;
}
void seasons() {
    season s;
    s= Rainy;
    cout << "Season code: " << s << endl;
}
int main() {
    weekdays();
    seasons();

    return 0;
}