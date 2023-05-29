#include <iostream>
using namespace std;

int main() {

    // break - breaks the normal flow of a loop when a condition is satified
    for(int i=0; i<10; i++) {
        if(i == 5)
            break;
        cout << i << " ";
    }

    cout << endl;

    // continue - skips when a certain condition is matched
    for(int i=0; i<10; i++) {
        if(i == 5)
            continue;
        cout << i << " ";
    }
    return 0;
}