#include <iostream>
using namespace std;

int main()
{
    
    const double LIMIT = 3000.0;
    int idNum;
    double miles;
    
    cout << "Please type in car number and milleage: ";
    cin >> idNum >> miles;
    
    if (miles > LIMIT)
       cout << "Car" << idNum << " is over the limit." << endl;
       
    cout << "End of program output." << endl;
    
    system ("pause");
    return 0;
}
