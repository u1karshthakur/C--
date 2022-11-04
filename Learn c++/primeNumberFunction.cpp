// prime number between two numbers using function

#include <iostream>

using namespace std;

int  pnum ( int n1 , int n2){
  int j ; 
  for ( int i = n1 + 1 ; i < n2 ; i ++){
    for (  j = 2 ; j < n1 ;  j++){
      if (i % j == 0){
        break;
      }
    }
    if (j  == i ){
      cout << i  << " is a prime number.";
    }
    
    }
  }

int main ( ){
  int a , b ;

  cout << "First number : ";
  cin >> a ;

  cout << " Second number : ";
  cin >> b ;

  pnum(a,b);
  return 0;
}