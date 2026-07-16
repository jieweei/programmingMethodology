#include <iostream> // this is using to tell c++ application, users need to use Input and output function, if no type of this code, sometime will get error.
using namespace std; //it allows users can use the standard library objects such as cout, end1 or another symbol without writing std:: in front of them.

int main() //int is the type of returned value; main is the function name and () is an empty argument list. There are using for execution all code begins from here.
{ //it is a symbol use to defines the scope of the code like all statement within the main() function.

    //Declaration Statements
    int number; //used to store whole number
    double price; //like the 'float' function, the 'double' function can record numbers with decimal points, but the 'double' function only can display a maximum of 15 digits.
    char grade; //is used to store a single character such as a letter, pokemon or tiger word.
    bool passed; //is used to store 'True' or 'False' only.
    
    //Initialization (assigning values)
    number = 25; //is assigns 15 to the variable number.
    price = 125.35; //is assigns 125.35 to the variable price.
    grade = 'A'; // is assigns character 'A' for the grade.
    passed = true; //if the score is passed, it will display true and the output will change to 1.
    
    //Display declared variables
    cout << "Number: " << number << endl; //in this code, the "Number" at the beginning will be output to the screen in the same way, while the number at the end is the variable stored in the system above with a value of "25".
    cout << "Price: RM " << price << endl; //in this code, the "Price: RM" at the beginning will be output to the screen in the same way, while the price at the end is the variable stored in the system above with a value of "125.35".
    cout << "Grade: " << grade << endl; //in this code, the "Grade" at the beginning will be output to the screen in the same way, while the grade at the end is the variable stored in the system above with a value of "A".
    cout << "Passed: " << passed << endl; //in this code, the "Passed" at the beginning will be output to the screen in the same way, while the passed at the end is the variable stored in the system above with a value of "true".
    
    system ("pause"); //when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0; //this code is used to end the program.
} //this symbol is used to end the program inside the symbol.
