#include <iostream> // this is using to tell c++ application, users need to use Input and output function, if no type of this code, sometime will get error.
using namespace std; //it allows users can use the standard library objects such as cout, end1 or another symbol without writing std:: in front of them.

int main() //int is the type of returned value; main is the function name and () is an empty argument list. There are using for execution all code begins from here.
{ //it is a symbol use to defines the scope of the code like all statement within the main() function.

    int sum; //this statement declares an integer variable called sum.
    
    sum = 66; //is assigns 66 to the variable sum.
    cout << "The number stored in sum is" << sum << endl; //in this code, the "The number stored in sum is" at the beginning will be output to the screen in the same way, while the sum at the end is the variable stored in the system above with a value of "66".
    sum+=44; //it will assigns 66 + 44 to the variable sum.
    cout << "The number now stored in sum is" << sum << endl; //in this code, the "The number now stored in sum is" at the beginning will be output to the screen in the same way, while the sum at the end is after the system calculate the sum result.
    
    system ("pause"); //when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0; //this code is used to end the program.
} //this symbol is used to end the program inside the symbol.
