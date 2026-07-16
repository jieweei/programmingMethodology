#include <iostream> // this is using to tell c++ application, users need to use Input and output function, if no type of this code, sometime will get error.
using namespace std; //it allows users can use the standard library objects such as cout, end1 or another symbol without writing std:: in front of them.

int main() //int is the type of returned value; main is the function name and () is an empty argument list. There are using for execution all code begins from here.
{ //it is a symbol use to defines the scope of the code like all statement within the main() function.

    double num1, num2, totalprice; //this statement declares three double variable called num1, num2 and totalprice.
    
    cout <<"Please type in a price:" ; //it will display the text 'Please type in a price' in the same way.
    cin >> num1; //user can use keyboard to type the value and store it in variable num1. 
    cout <<"Please type in a insurance:"; //it will display the text 'Please type in a insurance' in the same way.
    cin >> num2; //user can use keyboard to type the value and store it in variable num2.
    totalprice = num1 + num2; //then system will culcalate num1+num2 and store it in variable totalprice. 
    cout << num1 <<"+" << num2 << "is" << totalprice << endl; //it will output num1, then output the text '+'. then output the num2 and is, then output the total price. 
    
    system ("pause"); //when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0; //this code is used to end the program.
} //this symbol is used to end the program inside the symbol.
