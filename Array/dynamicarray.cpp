#include <iostream>
 using namespace std;

 class arrayList{

  public : 
  int *arr;
  int num_elements;
  int capacity;

  public:

  arrayList(int size) {
    arr = new int [size];
    num_elements = 0 ;
    capacity = size;
 }
 void resize(){
  int *temp = new int [capacity*2];
  capacity *= 2;

  for (int  i = 0 ; i < num_elements ; i++){
    temp[i] = arr[i];
  }

  delete[] arr;
  arr = temp;
 }
 void insert(int val){
  if ( num_elements < capacity){
    arr[num_elements++] = val;
  }
  else{
    resize();
    arr[num_elements++] = val;
  }
 }
 int get_length(){
  return num_elements;
 }
 void parray(){
  for ( int i = 0 ; i <num_elements ; i++ ){
    cout << arr[i] << endl;
  }
 }
 };

 int  main ( ){
  arrayList a(1);

  cout << "Size of the array : " << a.get_length() << endl;

  a.insert(0);
  a.insert(1);
  a.insert(2);
  a.insert(3);

  cout <<"Array : " <<endl;
  a.parray();return 0;

  
 }