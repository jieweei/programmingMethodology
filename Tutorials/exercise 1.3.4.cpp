#include <iostream> // this is using to tell c++ application, users need to use Input and output function, if no type of this code, sometime will get error.
using namespace std; //it allows users can use the standard library objects such as cout, end1 or another symbol without writing std:: in front of them.

int main() //int is the type of returned value; main is the function name and () is an empty argument list. There are using for execution all code begins from here.
{ //it is a symbol use to defines the scope of the code like all statement within the main() function.

    int count; //this statement declares an integer variable called count.
    
    count = 10; //This statement assigns the value 10 to the variable count.
    cout << "The initial value of count is" << count << endl; //This statement displays the initial value of count.
    count--; //This statement decreases the value of count by 1.
    cout << "count is now " << count << endl; //This statement displays the initial value of count.
    count--; //This statement decreases the value of count by 1.
    cout << "count is now " << count << endl; //This statement displays the initial value of count.
    count--; //This statement decreases the value of count by 1.
    cout << "count is now " << count << endl; //This statement displays the initial value of count.
    count--; //This statement decreases the value of count by 1.
    cout << "count is now " << count << endl; //This statement displays the initial value of count.
    
    system ("pause"); //when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0; //this code is used to end the program.
} //this symbol is used to end the program inside the symbol.
