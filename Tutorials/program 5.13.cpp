#include <iostream>
using namespace std;

int main(){
    int idNum;
    
    do
    {
        cout << "\nEnter an identification number: ";
        cin >> idNum;
                   if (idNum < 100 || idNum > 1999)
  {
   cout << "\n An invalid number was just entered"
     << "\nPlease check the ID number and reenter";
     }
        else
	   break; // break if a valid ID number was entered
    } while(1); // this expression is always true

    system ("pause");
    return 0;
}
