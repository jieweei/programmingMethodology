#include <iostream> // this is using to tell c++ application, users need to use Input and output function, if no type of this code, sometime will get error.
#include <cmath> //it is a preprocessor directive that tells the system to import the math library before compilation.
using namespace std; //it allows users can use the standard library objects such as cout, end1 or another symbol without writing std:: in front of them.

int main() //int is the type of returned value; main is the function name and () is an empty argument list. There are using for execution all code begins from here.
{ //it is a symbol use to defines the scope of the code like all statement within the main() function.

    int length; //this statement declares an integer variable called length.
    double volume; //this statement declares a double variable called volume.
    
    length = 125; //is assigns 125 to the variable length.
    volume = sin(25 * length * 15); //system will calculate the (25*125*15) then assigns the result to the variable volume. 
    cout << "This rectangle take" << volume << " meter"; //this line is display the text "This rectangle take", then output the value of the variable volume and output the text 'meter' as the unit.
    
    system ("pause"); //when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0; //this code is used to end the program.
} //this symbol is used to end the program inside the symbol.
     
