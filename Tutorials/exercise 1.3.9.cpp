#include <iostream> // this is using to tell c++ application, users need to use Input and output function, if no type of this code, sometime will get error.
#include <iomanip> //include the iomanip library for formatted output, such as setprecision, setw, setiosflags.
using namespace std; //it allows users can use the standard library objects such as cout, end1 or another symbol without writing std:: in front of them.

int main() //int is the type of returned value; main is the function name and () is an empty argument list. There are using for execution all code begins from here.
{ //it is a symbol use to defines the scope of the code like all statement within the main() function.

    const int NUM_SUBJECTS = 3;
    double score1, score2, score3, average; //this statement declares four double variable called score1, score2, score3 and average.

    cout << "Enter the score for subject 1: "; //it will display the text 'Enter the score for subject 1' in the same way.
    cin >> score1; //user can use keyboard to type the value and store it in variable score1.
    cout << "Enter the score for subject 2: "; //it will display the text 'Enter the score for subject 2' in the same way.
    cin >> score2; //user can use keyboard to type the value and store it in variable score2.
    cout << "Enter the score for subject 3: "; //it will display the text 'Enter the score for subject 3' in the same way.
    cin >> score3; //user can use keyboard to type the value and store it in variable score3.

    average = (score1 + score2 + score3) / NUM_SUBJECTS; //then system will culcalate score1+score2+score3 and store it in variable average.

    cout << setiosflags(ios::fixed) //force the use of a fixed decimal place format when outputting floating-point numbers.
         << setiosflags(ios::showpoint) //even if the decimal part is 0, make sure to display the decimal point.
         << setprecision(2); //set the number of decimal places for a floating-point number.

    cout << "Score 1: " << setw(5) << score1 << endl; //output the score for the first subject and setw(5) indicates that the number width is 5 and right-aligned.
    cout << "Score 2: " << setw(5) << score2 << endl; //output the score for the second subject and setw(6) indicates that the number width is 5 and right-aligned.
    cout << "Score 3: " << setw(5) << score3 << endl; //output the score for the third subject and setw(5) indicates that the number width is 5 and right-aligned.
    cout << "Average : " << setw(5) << average << endl; //output the score for the average and setw(5) indicates that the number width is 5 and right-aligned.

    system ("pause"); //when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0; //this code is used to end the program.
} //this symbol is used to end the program inside the symbol.
