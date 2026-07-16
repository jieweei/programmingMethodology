#include <iostream>
using namespace std;

int main ()
{
    for (int i = 1; i <= 5; i++) {
        if (i == 3){
              cout << "Skipping number 3 using continued" << endl;
              continue; //skip printing 3
              }
              cout << "Number: " << i << endl;
              }
              
              system ("pause");
              return 0;
}
