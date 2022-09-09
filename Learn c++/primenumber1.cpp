// prime number between a and b 

#include <iostream>

using namespace std;

int main (){
  int a , b ;
  int j;

  cout << "First value :";
  cin >> a ;

  cout << "Second value :";
  cin >> b ;
  

  for ( int i = a+1 ; i < b ;i ++ ){
    for (  j = 2 ; j < i ; j ++ ){
      if ( i % j == 0){
        break ;
      }
      
    }
    if ( j == i )
    cout << i << " is a prime number"  << endl;
    

  }
  return  0;



}