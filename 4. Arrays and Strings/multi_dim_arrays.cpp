#include <iostream>
using namespace std;

int main() {
    int n = 3;

    // Declare 2D array

    int arr[3][3] = {{1,4,7},{2,5,8},{3,6,9}};

    // Printing in matrix form

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // We can create 3D, 4D, etc. arrays
    
    return 0;
}