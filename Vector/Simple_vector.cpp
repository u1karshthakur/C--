#include <iostream>
#include <vector>

using namespace std ;


void display ( vector<int> & v){
  for ( int i = 0 ; i < v.size() ; i++){
    cout << v[i] << " ";

  }
  cout << endl;

}
 
int main (){
  vector<int> vec ; 

  int e;

  for ( int i = 0 ; i < 4 ; i++){
    cout << "Enter value :" ; 
    cin >> e ; 

    vec.push_back(e);
    
  }

  display(vec);
  return 0;
  
}