#include <iostream>
using namespace std;

int main()
{
    int opselect;
    double fnum , snum;
    
    cout << "Please type in two numbers: ";
    cin >> fnum >> snum;
    cout << "Enter a select code: ";
    cout << "\n      1 for addition";
    cout << "\n      2 for minus";
    cout << "\n      3 for multiplication";
    cout << "\n      4 for division :";
    cin >> opselect;
    
    switch (opselect)
    {
     case 1:
          cout << "The sum of the numbers entered is "
               << fnum + snum << endl;
          break;
     case 2:
          cout <<"The minus of the numbers entered is "
               << fnum - snum << endl;
          break;
     case 3:
          cout <<"The product of the numbers entered is "
               << fnum * snum << endl;
          break;
     case 4:
          cout <<"The first number divided by the second is "
               << fnum / snum << endl;
          break;
          }     //end of switch
          
          system ("pause");
          return 0;
}
