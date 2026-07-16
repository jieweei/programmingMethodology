#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int celsius;
    double fahren;
    
    celsius = 5;
    while (celsius <= 50)
    {
          fahren = (9.0/5.0) * celsius + 32.0;
          cout << setw(4) << celsius
               << setw (13) << fahren << endl;
          celsius = celsius + 5;
}

 system ("pause");
 return 0;
}
