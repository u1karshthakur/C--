#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
  for ( int i = 0 ; i < v.size() ; i++){
    cout << v[i] << " " ;

  }
  cout << endl;

}

int main (){
  vector<int> vec ;
  int element ; 
   for ( int i = 0; i < 4 ; i++){
    cout << "Enter the value for vector : ";
    cin >> element;

    vec.push_back( element );
    
   }

   display(vec);
   return 0 ;
}