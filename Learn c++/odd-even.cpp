// odd - even

#include <iostream>

using namespace std ;
void oe ( int x ){
  
  if (x%2 == 0 )
  cout << "Even " << endl;
  else
  cout << "Odd" << endl ;

}

int main ( ){
  int  num ;

  cin >> num ;
  oe (num) ;
  return  0 ;

}