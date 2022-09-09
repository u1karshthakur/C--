//check for prime numbers 
#include <iostream>

using namespace std ;

int main (){
  int n;
  int i ;
  
  cin >> n ;

  if ( n ==1){
    cout << "Neither prime number or compsite" <<endl ;
  }

  for ( i = 2 ; i < n ;i++){
    if ( n %i == 0){
      cout <<"Composite";
      break;
    }
  }
  if ( i == n )
  cout << "Prime" << endl ;

  return 0;


}