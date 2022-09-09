// switch calculator

#include <iostream>

using namespace std ;

int main ( ){
  char op ;
  int a , b ;

  cout << "value 1 : " ;
  cin >> a ;

  cout << "value 2 : " ;
  cin >> b ;

  cout << "operator :";
  cin >> op ;

  switch ( op ){
    case '+' : 
    cout << a+b <<endl;
    break;
    
    case '-':
    cout << a-b <<endl;
    break;

    case '*':
    cout << a*b <<endl;
    break;

    case '/' :
    cout << a/b <<endl;
    break;

    case '%':
    cout << a%b <<endl;
    break;

    default :
    cout << "unknown op" <<endl;
  }

  return  0 ;
}