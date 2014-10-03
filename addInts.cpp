#include <iostream>                  //IO macro
using namespace std;                 // Invoke std namespace

int main()                           //main declaration
{
  int num1;                          // Declares integer variables
  int num2;
  int sum;

  cout<<"Enter two integers: ";      // IO chunk to retrieve two ints from user 
  cin>> num1 >> num2;                
  cin.ignore();           

  sum = num1 + num2;                 // Calculates sum of two ints

  cout<<"The sum of the numbers is: " <<sum <<"\n";  // Output results
  cin.get();
}

