#include <iostream>
using namespace std;

int main() {
    int limit = 10;

    int i = 0;
    while (i != limit) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    i = 0;
    do {
        cout << i << " ";
        i++;
    } while (i != limit);

    return 0;
}