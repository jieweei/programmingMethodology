#include <iostream>
using namespace std;

int main ()
{
    int number;
    
    cout << "Enter numbers (enter 0 to stop) :" << endl;
    
    while (true ) { //Infinite loop
          cin >> number;
          if (number ==0) {
             cout << "Loop stopped using break!" << endl;
             break; //Exit loop immediately
             }
             cout << "You entered: " << number << endl;
}

 system ("pause");
 return 0;
}
