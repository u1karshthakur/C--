#include <iostream>

#include<vector>

using namespace std;

void  display ( int a[]  , int size){
  for ( int i = 0; i < size; i++ ){
    cout << a[i] << " ";
  }
  cout<< endl;
}

int main(){
  int size ;
  int e;

  int *arr = new int[size];

  cout << "size :" ;
  cin >> size ;

  for ( int i = 0 ; i < size ; i++){
    cout << "value : ";
    cin >> e;

    arr[i] = e ;
  }

  display ( arr , size );
  return 0 ;

}
