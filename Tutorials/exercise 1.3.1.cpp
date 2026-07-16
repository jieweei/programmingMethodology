#include <iostream> // this is using to tell c++ application, users need to use Input and output function, if no type of this code, sometime will get error.
using namespace std; //it allows users can use the standard library objects such as cout, end1 or another symbol without writing std:: in front of them.

int main() //int is the type of returned value; main is the function name and () is an empty argument list. There are using for execution all code begins from here.
{ //it is a symbol use to defines the scope of the code like all statement within the main() function.
    
    double length, width, area; //this statement will declares three double variable: length, width and area.
    
    length = 25; //is assigns 25 to the variable length.
    width = 15.25; //is assigns 15.25 to the variable width.
    area = length * width; //it will calculate length multi width, then the result will assigns  to the variable area.
    
    cout <<  "The length of the cube is" << length << endl; //in this code, the "The length of the cube is" at the beginning will be output to the screen in the same way, while the length at the end is the variable stored in the system above with a value of "25".
    cout << "The width of the cube is" << width << endl; //in this code, the "The width of the cube is" at the beginning will be output to the screen in the same way, while the width at the end is the variable stored in the system above with a value of "15.25".
    cout << "The area of the cube is" << area << endl; //in this code, the "The area of the cube is" at the beginning will be output to the screen in the same way, while the area at the end is after the system caluculate the result.
    
    system ("pause"); //when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0; //this code is used to end the program.
} //this symbol is used to end the program inside the symbol.
