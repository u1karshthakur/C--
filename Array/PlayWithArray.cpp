#include <iostream>

using namespace std ;

void display ( int a[] , int size){
  for ( int i = 0; i < size; i++ ){
    cout << a[i] << " ";
  }
  cout << endl;

}

void running_sum ( int a[] , int size){
  for ( int i = 1 ; i < size; i++ ){
   a[i] += a[i- 1]; 
  }
  display(a , size);
}



int main (){
  int arr[5] = { 1 , 2, 3 ,4 ,5 };

  display (arr , 5);
  running_sum( arr , 5);

  return 0 ; 

}