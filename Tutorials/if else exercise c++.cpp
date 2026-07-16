#include <iostream>
using namespace std;

int main()
{
    int score;
    
    cout << "Enter a number:";
    cin >> score;
    
    if (score >= 80 )
       cout << "The score is perfect." << endl;
    else if (score >= 70)
         cout << "The score is good." << endl;
    else if (score >= 60)
         cout << "The score is ok." << endl;
    else if (score >= 50)
         cout << "The score is pass." <<endl;
    else
        cout << "You are failed." << endl;
    
    system ("pause");   
    return 0;
    
}
