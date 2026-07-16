#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    const int MAXNUMS = 10000;
    int num;
    cout << endl; // print a blank line
    cout << "NUMBER   SQUARE   CUBE\n"
         << "------   ------   ----\n";
    for (num = 5; num <=MAXNUMS; num++)//(initialization; condition; update)
        cout << setw(3) << num << "      "
             << setw(3) << num * num << "      "
             << setw(4) << num * num * num << endl;
             
             system ("pause");
             return 0;
}
        
