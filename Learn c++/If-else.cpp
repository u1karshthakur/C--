 // maximum between 3 numbers using if -else

#include <iostream>
using namespace std ;

int main ( ){
  int a ,b , c ;
  int answer ;

  cout << "First number : ";
  cin >> a ;

  cout << "Second number : ";
  cin  >> b ;

  cout << "Third number : ";
  cin >> c ;

  if ( a > b && a > c)
  cout << "Largest number : " << a <<endl;
  else if (b > a && b > c)
  cout << "Largest number : " << b <<endl;
  else
  cout <<"Largest number : " << c << endl;

  return  0 ;

}
