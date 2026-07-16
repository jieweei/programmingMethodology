#include <iostream>
using namespace std;

int main(){
    
    int j;
    int i;
    
    for(i = 1; i <= 3; i++) 	  // start of outer loop 
{ 			       			        
	cout << "\ni is now " << i << endl;               
					                   
	for(j = 1; j <= 4; j++)    // start of inner loop
	{ 
	   cout << " j = " << j << endl;      
	}			        // end of inner loop 
} 			        // end of outer loop 
 system ("pause");
 return 0;
}
