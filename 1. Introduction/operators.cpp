#include <iostream>
#include <string>
using namespace std;

int main() {
    /*
    Arithmetic Operator
        Operator	Operation
        +	        Addition
        -	        Subtraction
        *	        Multiplication
        /	        Division
        %	        Modulo Operation (Remainder after division)
        ++          increment
        --          decrement
    */
    cout << "4 + 5 = " << 4+5 <<endl;
    cout << "4 - 5 = " << 4-5 <<endl;
    cout << "4 * 5 = " << 4*5 <<endl;
    cout << "4 / 5 = " << 4/5 <<endl;
    cout << "4 % 5 = " << 4%5 <<endl;

    int num1 = 4;
    num1++;
    cout << "4++ = " << num1 <<endl;
    num1--;
    cout << "5-- = " << num1 <<endl;
    /*
    Assignment Operator
        Operator	Example	    Equivalent to
        =	        a = b;	    a = b;
        +=	        a += b;	    a = a + b;
        -=	        a -= b;	    a = a - b;
        *=	        a *= b;	    a = a * b;
        /=	        a /= b;	    a = a / b;
        %=	        a %= b;	    a = a % b;
    */
    int num2 = 10;
    num2 += 5;
    cout << "10 + 5 = " << num2 << endl;
    num2 -= 5;
    cout << "15 - 5 = " << num2 << endl;
    num2 *= 5;
    cout << "10 * 5 = " << num2 << endl;
    num2 /= 5;
    cout << "50 / 5 = " << num2 << endl;
    num2 %= 5;
    cout << "10 % 5 = " << num2 << endl;
    /*
    Relational Operator
        Operator	Meaning	                    Example
        ==	        Is Equal To	                3 == 5 gives us false
        !=	        Not Equal To	            3 != 5 gives us true
        >	        Greater Than	            3 > 5 gives us false
        <	        Less Than	                3 < 5 gives us true
        >=	        Greater Than or Equal To	3 >= 5 give us false
        <=	        Less Than or Equal To	    3 <= 5 gives us true
    */
    string declaration = (3>5) ? "3 is greater than 5" : "5 is greater than 3"; // ternary operator
    cout << declaration << endl;
    /*
    Logical Operator
        Operator	Example	                    Meaning
        &&	        expression1 && expression2	Logical AND.
                                                True only if all the operands are true.
        ||	        expression1 || expression2	Logical OR.
                                                True if at least one of the operands is true.
        !	        !expression	                Logical NOT.
                                                True only if the operand is false.
    */
    declaration = (5>3) && (5>4) ? "5 is larger than 3 and 4": "5 is either smaller than 3 or 4";
    cout << declaration << endl; 
    /*
    Bitwise Operator
        Operator	Description
        &	        Binary AND
        |	        Binary OR
        ^	        Binary XOR
        ~	        Binary One's Complement
        <<	        Binary Shift Left
        >>	        Binary Shift Right
    */
    int num3 = 50 << 2; // input - 0011 0010 (50) , result - 1100 1000 (200)
    int num4 = 50 >> 2; // input - 0011 0010 (50) , result - 0000 1100 (12)
    cout << "50 << 2 = " << num3 << " - sizeof(answer) - " << sizeof(num3) << endl;
    cout << "50 >> 2 = " << num4 << " - sizeof(answer) - " << sizeof(num4) << endl;
    /*
    Other Operator
        Operator	    Description	                                                Example
        sizeof	        returns the size of data type	                            sizeof(int); // 4
        ?: 	            returns value based on the condition	                    string result = (5 > 0) ? "even" : "odd"; // "even"
        &	            represents memory address of the operand	                &num; // address of num
        .	            accesses members of struct variables or class objects	    s1.marks = 92;
        ->	            used with pointers to access the class or struct variables	ptr->marks = 92;
        <<	            prints the output value                                 	cout << 5;
        >>	            gets the input value	                                    cin >> num;
    */
   return 0;
}