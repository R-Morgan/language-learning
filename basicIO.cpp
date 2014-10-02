#include <iostream>

using namespace std;

int main () 
{ 
  int number;
  cout<<"Enter an integer: ";
  cin>> number;
  cin.ignore();
  cout<<"You entered: "<< number <<"\n";
  cin.get();
}
