#include <iostream>
using namespace std ;

int main ( ){
  int a ;
  long int b ;
  short int c ;
  char d ;
  bool e ;
  float f ;
  double g ;

  cout << "Size of int :" << sizeof(a) << endl;
  cout << "Size of long int :" << sizeof(b) <<endl;
  cout << "Size of short int :" << sizeof(c) << endl;
  cout << "Size of char : " << sizeof(d) << endl;
  cout << "Size of boolean : " << sizeof(e) << endl;
  cout << "Size of float : " << sizeof(f) << endl;
  cout << "Size of double : " << sizeof(g) << endl;

  return 0 ;

}