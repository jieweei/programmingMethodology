#include <iostream>//include the input and output library 
#include <iomanip>//used for formatting output
using namespace std;//allow users to use standard function such as cout and cin 

void MonthlySales (double sales [])//used to input the sales value and store into the array
{
     for (int i =0; i <10; i++)//this line is using loop to run 10 times to input data for ten employees
     {
         cout << "Employee" << i+1 << ":";//display employee, adding one employee each time until it's repeated 10 times
         cin >> sales [i];//lets user to input the sales and store in the sales array
         } 
}

void CalculateCommission (double sales [], double commission [])//used to display the calculate of commission and store into the array.
{
     for (int i =0; i <10; i++)//using loop to run 10 times to input data for ten employees
     {
         if ( sales [i] >=50000)//this check if the sales is greater than or equal to 50000 
            commission [i] =sales[i] * 0.16;//if true, the sales will multiple 0.16
         else if ( sales [i] >=40000)//check if the sales is greater than or equal to 40000
            commission [i] =sales[i] * 0.12;//if true, the sales will multiple 0.12
         else if ( sales [i] >=30000)//check if the sales is greater than or equal to 30000
            commission [i] =sales[i] * 0.10;//if true, the sales will multiple 0.10
         else if ( sales [i] >=10000)//check if the sales is greater than or equal to 10000
            commission [i] =sales[i] * 0.06;//if true, the sales will multiple 0.06
         else //if none of the above conditions are met, this function will be executed
            commission [i] =sales[i] * 0.03;//if true, the sales will multiple 0.03
            }
}

void ResultCalculate (double sales [], double commission [])//used to display the result of calculate and store into the array
{    
     cout <<"Results of calculations" << endl;//display the word "reslut of calculations"
     cout << "----------------------------------------\n" << endl;//display the ---- symbol under the result of calculations
     
     cout << setw(10) <<"Employee"; //this is used to display the word Employee and align the output in column 
     cout << setw(13) <<"Sales"; //this is used to display the word Sales and align the output in column
     cout << setw (16) <<"Commission" <<endl;//this is used to display the word Commission and align the output in column
     cout << "-----------------------------------------\n"; //display the -----symbol under the Commission 
     cout << fixed << setprecision (2);//this used to ensure the output is shown with two decimal places 
         
         for (int i=0;i<10;i++)//this loop display data for all employees 
         
         {
         cout << setw(10) <<"Employee" << i+1 //this is used to display the word Employee and align the output in column
              << setw(13) <<sales [i]//this line prints the sales value 
              << setw(13) <<commission [i] << endl;//this line prints the commission value
              }
}

int main()//this is the main function where the program start
{
    double sales[10];//this array is used to store the sales value
    double commission [10];//this array is used to store the commission value
    
    cout <<"Enter monthly sales:\n";//display the word Enter monthly sales and space a new line
    MonthlySales (sales);//this line called the function to input data
    CalculateCommission (sales, commission);//this line is used to calculate the commission and display it
    ResultCalculate (sales, commission); //this line is used to display the result of the calculate
    
    system ("pause");////when we try to run the code, the system will run faster so the output screen will go out instantly. So we need to type this code to let the output screen to close immediately.
    return 0;//this line is end the program
}
