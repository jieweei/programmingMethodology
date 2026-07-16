#include <iostream>
using namespace std;

int main ()
{
    int number ;
    int total = 0;
    
    cout << "Enter numbers to sum (enter -1 to stop):" << endl;
    
    cin >> number;
    while (number != -55) {
          total += number;
          cin >> number;
}

 cout << "Total sum = " << total << endl;
 
 system ("pause");
 return 0;
}
