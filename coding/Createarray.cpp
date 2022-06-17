#include <iostream>

using namespace std;

int main(){

  int size ;

  cout <<"Enter the size of the array you want to create :";
  cin >> size;

  int *arr = new int[size];//dynamic array
  for (int i = 0; i < size;i++){
    cout <<"Enter the required elements onr by one22:";
    cin >> arr[i];
    cout <<endl;
  }

  for(int i = 0; i < size; i++){
    cout << arr[i]<<endl;

  }
  return 0;
}