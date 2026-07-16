#include <iostream>
using namespace std;

int main ()
{
    int i = 0;
    
    //Loop counts from 0 to 4 but does nothing inside 
    for (i = 0; i < 15; i++); // <--null statement (just a semicolon)
    
    cout << "The loop finished. i = " << i << endl;
    
    system ("pause");
    return 0;
}
