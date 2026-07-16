#include <iostream> // this is using to tell c++ application, users need to use Input and output function, if no type of this code, sometime will get error.
using namespace std; //it allows users can use the standard library objects such as cout, end1 or another symbol without writing std:: in front of them.

int main() //int is the type of returned value; main is the function name and () is an empty argument list. There are using for execution all code begins from here.
{ //it is a symbol use to defines the scope of the code like all statement within the main() function.

    cout << "The decimal (base 10) value of 42 is" << 42 << endl; //it will display "The decimal (base 10) value of 42 is" to the output screen in the same way and output the decimal number 42.
    cout << "The octal (base 8) value of 56 is" << showbase << oct << 56 <<endl; //it will display the text "The octal (base 8) value of 56 is" , then converts the decimal number 56 to octal. 
    cout << "The hexadecimal (base 16) value of 99 is" << showbase << hex << 99 << endl; //this line is display the text "The hexadecimal (base 16) value of 99 is", then convert the decimal number 99 to hexadecimal.
    
    system ("pause"); //when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0; //this code is used to end the program.
} //this symbol is used to end the program inside the symbol.
