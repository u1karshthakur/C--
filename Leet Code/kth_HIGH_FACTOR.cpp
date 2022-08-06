#include <iostream>
#include <vector>
using namespace std;

void display ( vector < int> &v ) {
  for ( int i = 0; i < v.size();i++){
    cout << v[i]  << " ";
  }
  cout << endl;
}

int cal (int n ,int pos){
  vector <int> vec ;
  for ( int i = 1 ; i <= n ; i ++ ){
    if ( n%i ==  0){
      vec.push_back(i);
    }
  };
  if ( pos > vec.size() ){
    return -1;
  }
  else
   return vec[pos-1];
}


int  main () {
  int num;
  int position ;
  int answer;

  cout << "Enter number : " ;
  cin >> num;

  cout << "Position : " ;
  cin  >> position;

  answer =  cal (num, position);

  cout << answer << endl;
  return 0 ;

}


