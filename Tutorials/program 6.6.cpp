#include <iostream>
using namespace std;

inline double tempvert (double inTemp) //an inline function
{
       return (5.0/9.0) * (inTemp - 32.0);
       }
       int main()
       {
           const int CONVERTS= 4; //number of conversions to be made
           int count; // start of variable declarations
           double fahren;
           
           for (count =1; count <= CONVERTS; count++)
           {
               cout<< "Enter a Fahrenheit temperature: ";
               cin >> fahren;
               cout << "The Celsius equivalent is "
                    << tempvert (fahren) <<endl;
                    }
                    
       system ("pause");
       return 0;
}
 
