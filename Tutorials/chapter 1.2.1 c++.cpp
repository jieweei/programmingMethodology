#include <iostream> // this is using to tell c++ application, users need to use Input and output function, if no type of this code, sometime will get error.
using namespace std; //it allows users can use the standard library objects such as cout, end1 or another symbol without writing std:: in front of them.

int main () //int is the type of returned value; main is the function name and () is an empty argument list. There are using for execution all code begins from here.
{ //it is a symbol use to defines the scope of the code like all statement within the main() function.

    //integer data types
    int totalAmount = 251; //when we need to calculate integers, we can use the 'int' function. 'Int' function can only calculate integers such as 251 in the code and cannot include any decimal point.
    //character data types
    char section = 'A'; //when we only need to input a single letter, we can use the 'char' function. When using the 'char' function, we need to enclose the letter in single quotes (' ').
    //boolean data types
    bool isClassActive = true; //when we want to verify whether a problem is correct, we can use the 'bool' function to perform the verification.

    //Floating-point data types
    float averageScore = 3.141; //when we need to calculate numbers with decimal, we can use the 'float' function to input these numbers such as 3.141 in the code. The 'float' function will only display several approximately seven digits.
    double Piperimeter = 3.14159265359;  //like the 'float' function, the 'double' function can record numbers with decimal points, but the 'double' function only can display a maximum of 15 digits.
    
    //Display all data types
    cout << "Total Amount:" << totalAmount << endl; //this code will output our code to the output screen. Everything within the parentheses (<<) will be output. Entries starting with an empty string will be output as is, while the following content will output the values of variables stored in the system. Finally, 'endl' will add a newline character to that code. For example, "Total Amount" will be output exactly as shown on the output screen and the behind text totalAmount will be the 251 stored in the system above
    cout << "Class Section:" << section << endl; //in this code, the "Class Section" at the beginning will be output to the screen in the same way, while the section at the end is the variable stored in the system above, namely "A".
    cout << "Class Active:" << isClassActive << endl; //in this code, the "Class Active" at the beginning will be output to the screen in the same way, while the isClassActive at the end is a variable stored in the system above with a value of "True".
    cout << "Average Score:" << averageScore << endl; //in this code, the "Average Score" at the beginning will be output to the screen in the same way, while the averageScore at the end is a variable stored in the system above with a value of "3.141".
    cout << "Pi Perimeter:" << Piperimeter << endl; //in this code, the "Pi Perimeter" at the beginning will be output to the screen in the same way, while the Piperimeter at the end is a variable stored in the system above with a value of "3.14159265359".
    
    system ("pause"); //when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0; //this code is used to end the program.
} //this symbol is used to end the program inside the symbol.
