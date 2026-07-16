#include <iostream> // this is using to tell c++ application, users need to use Input and output function, if no type of this code, sometime will get error.
using namespace std; //it allows users can use the standard library objects such as cout, end1 or another symbol without writing std:: in front of them.

int main() //int is the type of returned value; main is the function name and () is an empty argument list. There are using for execution all code begins from here.
{ //it is a symbol use to defines the scope of the code like all statement within the main() function.

    // Displaying text (string literals)
    cout << "Nice to meet you!" <<endl; //in this code, it will output the sentences 'Nice to meet you!' in the output screen.
    
    //Displaying numbers
    cout << "The minus of 15 and 7 is " << (15 - 7) << endl; //in this code, the "The minus of 15 and 7 is" at the beginning will be output to the screen in the same way, then system will perform calculations based on the question provided by the user. 
    
    //Displaying variables
    int num = 66; //is assigns 116 to the variable number.
    double time = 6.45; //the system will store decimal number 6.45 in the variable time.
    double price = 35; //the system will store decimal number 35 in the variable price.
    
    cout << "Number: " << num << endl; //in this code, the "Number" at the beginning will be output to the screen in the same way, while the num at the end is the variable stored in the system above with a value of "66".
    cout << "Time: " << time << endl; //in this code, the "Time" at the beginning will be output to the screen in the same way, while the time at the end is the variable stored in the system above with a value of "6.45".
    cout << "Price: " << price << endl; //in this code, the "Price" at the beginning will be output to the screen in the same way, while the passed at the end is the variable stored in the system above with a value of "true".
    
    //using escape sequences
    cout << "My father is a boy \n" ; //in this code, it will output the sentences 'My father is a boy' in the output screen and it also using \n to move the text to next line.
    cout << "My mother is a girl \n" ; //in this code, it will output the sentences 'My mother is a girl' in the output screen and it also using \n to move the text to next line.
    
    //Multiple items in on cout statement
    cout << "Total - " << num << ", Cost - RM " << price << ", So the time is " << time << endl; //in this code, it will output the text "Total - ", then display the value of num, followed by ", Cost - RM ", then the value of price, and ", So the time is ", then the value of time. It also uses endl to move the text to the next line.
    
    system ("pause"); //when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0; //this code is used to end the program.
} //this symbol is used to end the program inside the symbol.
