#include <iostream>
using namespace std;

int main()
{
    double speed,distance,time;
    
    cout<<"Please enter speed (km/h)\n";
    cin >> speed;
    
    cout <<"Please enter time \n" ;
    cin >> time;
    
    time=time/60;
    
    distance=speed * time;
    
    cout <<"The distance is:" <<distance;
    
    system ("pause");
    return 0;
}
     
