#include <iostream>

#include  <vector>

using namespace std ;

int cal ( vector<int> &v , int k ){
  int count = 0 ;
  for ( int i  = 0; i < v.size() ; i++){
    for ( int j = 0 ; j  <v.size ( ); j ++ ){
      if ( v[i]- v[j] == k ){
        count ++ ;

      }
    }
  }
  return count ;

}
int main(){
  vector < int> vec ;
  int e;
  int answer ; 
  int target ;
  for ( int i = 0 ; i < 5 ; i ++ ){
    cout << " Enter value : ";
    cin >> e;
    cout << endl;
    vec.push_back(e);
  } 
  cout << "target  value : ";
  cin >> target ;

  answer = cal ( vec, target);
  cout  << "Answer : " << answer << endl ;
  return  0;


}