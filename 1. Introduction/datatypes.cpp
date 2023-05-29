#include <iostream>
using namespace std;

int main() {
    // datatypes: decides what type of data a variable can hold.
    
    // integers

    int age = 23; // datatype - integer (2 or 4 bytes)
    cout << "I am " << age << " years old"<< endl;

    // floating-points

    float cost = 4999.00; // datatype - flaot (4 bytes)
    cout << "The cost of the product is " << cost << endl;

    const double PI = 3.14159265358979; // datatype - double (8 bytes)
    cout << "The value of PI is " << PI << endl;

    // characters

    char respect = 'F'; // datatype - character (1 byte)
    cout << "Press \'" << respect << "\' to pay respect." << endl;

    wchar_t setup_confirm = 'y'; // datatype - wchar_t (2 byte)
    cout << "Press \'" << setup_confirm << "\' to start installation." << endl;

    // boolean

    bool response = 1; // datatype - boolean (1 for true, 0 for false) (1)
    cout << "Is this true? - " << response << endl;

    // void - empty - takes 0 bit

    // type modifier
    /*
        modifiers:
            -- signed
            -- unsigned
            -- short
            -- long

        datatypes where we can use these modifiers:
            -- int
            -- double
            -- char

        Datatype	Size (in Bytes)	    Meaning
        signed int	        4	        used for integers (equivalent to int)
        unsigned int	    4	        can only store positive integers
        short	            2	        used for small integers (range -32768 to 32767)
        unsigned short	    2	        used for small positive integers (range 0 to 65,535)
        long	            at least 4	used for large integers (equivalent to long int)
        unsigned long	    4	        used for large positive integers or 0 (equivalent to unsigned long int)
        long long	        8	        used for very large integers (equivalent to long long int).
        unsigned long long	8	        used for very large positive integers or 0 (equivalent to unsigned long long int)
        long double	        12	        used for large floating-point numbers
        signed char	        1	        used for characters (guaranteed range -127 to 127)
        unsigned char	    1	        used for characters (range 0 to 255)
    */
    return 0;
}