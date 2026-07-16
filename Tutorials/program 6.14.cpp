#include <iostream>
using namespace std;
void teststat ();//function prototype
void teststat ()
{
     static int num = 0;// num is a local static variable
     cout <<" The value of the static variable num is now "
          << num << endl;
     num++;
     return;
}

void teststat2 ()
{
     static int num = 0;// num is a local static variable
     cout <<" The value of the static variable num2 is now "
          << num << endl;
     //num++;
     return;
}

int main ()
{
    int count;// count is a local auto variable
    for (count =1; count <=3; count++)
        teststat ();
    teststat2 ();
    system ("pause");
    return 0;
}




