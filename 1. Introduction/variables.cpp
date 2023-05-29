#include <iostream>
using namespace std;

int main() {
    // variables - container (storage area) for holding data

    int age = 22; // int - datatype, age - variable name, 22 - literal

    // varlable names can be changed

    cout << "My age is " << age << endl;

    age = 18;

    cout << "I completed school at the age of " << age << endl;

    /*
    Rules for naming variable:
        -- variables can only have, alphabets, numbers and underscore (_)
        -- variables cannot begin with a number but can start with an underscore
        -- varlables should start with a lowercase character
        -- variables should not be a keyword
    */

    // literals - data representing the fixed value
    /*
    Literals:
        -- integers
            -- decimals (base 10): 0, 1, 2, 343, -234
            -- octal (base 8): 05, 077, 044, 014
            -- hexadecimal (base 16): 0x7f, 0x2a, 0x234, etc.
        -- floating points (floats): 0.3, 0.45
        -- characters: 'a', 'm', 'F', '2', '@'
        -- escape sequences:
            -- \n: newline
            -- \t: vertical tab
            -- \': single quotes
            -- \": double quotes
            -- \\: backslash
            -- \?: question mark
            -- \0: null character
        -- string: "google", "microsoft", "cognizant"
    */

   float costOfMangoes = 5.5f;
   int unitsBought = 23;

   cout << "The total cost of mangoes is " << (float) unitsBought * costOfMangoes << endl;

   // constants: values that don't change

   const float SPEED_OF_LIGHT = 299792458;
   cout << "The speed of light is " << SPEED_OF_LIGHT << "m/s" << endl;
   return 0;
}