#include <iostream>
using namespace std;

int main() {
    int n, arr[10];

    cout << "Enter a number (num > 0 and num < 10): ";
    cin >> n;

    if(n < 0 || n > 9) {
        cout << "The number inputed is exceeding limits. ";
        return 1;
    }

    for(int i=0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    int sum=0;
    for(int i=0; i < n; i++) {
        sum+=arr[i];
    }

    cout << "The sum of the element are: " << sum << endl;
    return 0;
}