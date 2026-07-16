#include <iostream> // this is using to tell c++ application, users need to use Input and output function, if no type of this code, sometime will get error.
using namespace std; //it allows users can use the standard library objects such as cout, end1 or another symbol without writing std:: in front of them.

int main() //int is the type of returned value; main is the function name and () is an empty argument list. There are using for execution all code begins from here.
{ //it is a symbol use to defines the scope of the code like all statement within the main() function.

    int sum; //this statement declares an integer variable called sum.
    
    sum = 0; //is assigns 0 to the variable sum.
    cout << "The value of sum is initially set to" << sum << endl; //in this code, the "The value of sum is initially set to" at the beginning will be output to the screen in the same way, while the sum at the end is the variable stored in the system above with a value of "0".
    
    sum += 96; //it will assigns 0 + 96 to the variable sum.
    cout << "sum is now" << sum << endl; //in this code, the "sum is now" at the beginning will be output to the screen in the same way, while the sum at the end is after the system calculate the sum result.
    sum += 70; //it will assigns 96 + 70 to the variable sum.
    cout << "sum is now" << sum << endl; //in this code, the "sum is now" at the beginning will be output to the screen in the same way, while the sum at the end is will calculate 96+70.
    sum += 85; //it will assigns 166 + 85 to the variable sum.
    cout << "sum is now" << sum << endl; //in this code, the "sum is now" at the beginning will be output to the screen in the same way, while the sum at the end is will calculate 166+85.
    sum += 60; //it will assigns 251 + 60 to the variable sum.
    cout << "sum is now" << sum << endl; //in this code, the "sum is now" at the beginning will be output to the screen in the same way, while the sum at the end is will calculate 251+60.
    
    system ("pause"); //when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0; //this code is used to end the program.
} //this symbol is used to end the program inside the symbol.
