#include <iostream>

#include <vector>

using namespace std ;

void display ( vector<int> &v ){
  for( int i = 0 ; i  < v.size() ; i++ ){
    cout << v[i] << " ";
    
  }
  cout << endl;
}

int main ( ){
  vector<int> vec ; 

  int e , size ;

  cout << "Size : " ;
  cin >> size ;

  for ( int i= 0 ; i < size ; i++ ){
    cout << " Value : ";
    cin >> e;

    vec.push_back( e );

  }
  display( vec);

  vector<int> ::iterator iter = vec.begin();

  vec.insert(iter+2, 0);

  display(vec);

  return 0 ;
}