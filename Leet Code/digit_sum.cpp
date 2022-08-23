#include <iostream> 
#include <vector> 

using namespace std;

int main ( ){
  int e ;
  int sum ; 

  cout << "Enter : ";
  cin >> e  ; 

  while ( e != 0 ){
    sum += e %10;
    e/=10;
    


  }
  int temp = sum ;
  int nsum = 0 ;

  if ( sum > 9){
    while (temp != 0 ){
    nsum += temp%10;
    nsum/=10; 
    }
  
  cout << nsum  ;
  }

  else
  cout << sum  ;
}

