#include <iostream>                                //IO macro
using namespace std;                               // Invoke std namespace

int main()
{
  int num1;
  int num2;
  int sum;
  cout<<"Enter an integer: ";
  cin>> num1;
  cin.ignore();
  cout<< "Enter a second integer: ";
  cin>> num2;
  cin.ignore();
  sum = num1 + num2;
  cout<<"The sum of the numbers is: " <<sum <<"\n";
  cin.get();
}

