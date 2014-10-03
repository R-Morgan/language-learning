#include <iostream>                  //IO macro
using namespace std;                 // Invoke std namespace

int summed (int x, int y)
{
  return x + y;
}


int main()                           //main declaration
{
  int num1;                          // Declares integer variables
  int num2;
  int sum;

  cout<<"Enter two integers: ";      // IO chunk to retrieve two ints from user 
  cin>> num1 >> num2;                
  cin.ignore();           

  cout<<"The sum of the numbers is: " <<summed (num1, num2) <<"\n";
  cin.get();
}

