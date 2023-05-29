// Using substraction icon to add

#include <iostream>
using namespace std;

class Add {
    public:
        int iVar;
        Add(int iVar = 0) {
            this->iVar = iVar;
        }
        Add operator- (Add obj) {
            Add tempObj;
            tempObj.iVar = iVar + obj.iVar;
            return tempObj;
        }
        void display() {
            cout << iVar << endl;
        }
};
int main() {
    Add op1(2), op2(7);
    Add op3 = op1 - op2;

    op3.display();

    return 0;
}