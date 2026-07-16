#include <iostream> // this is using to tell c++ application, users need to use Input and output function, if no type of this code, sometime will get error.
using namespace std; //it allows users can use the standard library objects such as cout, end1 or another symbol without writing std:: in front of them.

int main() //int is the type of returned value; main is the function name and () is an empty argument list. There are using for execution all code begins from here.
{ //it is a symbol use to defines the scope of the code like all statement within the main() function.
    
    char ch; //this declares a character variable 
    
    ch = 'o' ; //store the word o in ch
    cout << "The character stored in ch is " << ch << endl; //the system will output 'The character stored in ch is' sentences in the output screen.
    ch = 'f' ; //now stored the word f in ch
    cout << "The character now stored in ch is" << ch << endl; //the system will output 'The character now stored in ch is' sentences in the output screen.
    
    system ("pause"); //when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0; //this code is used to end the program.
} //this symbol is used to end the program inside the symbol.
