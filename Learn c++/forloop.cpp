// sum till given number
#include <iostream>

using namespace std;

int main ( ){
  int a ;
  int sum = 0 ;

  cin >> a ;

  for ( int i = 0; i <= a; i++){
    sum = sum + i;
  }
  cout << "Sum : " << sum << endl;

  return 0 ;


}