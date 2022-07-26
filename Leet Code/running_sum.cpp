#include <iostream>

#include <vector>

using namespace std;


 vector<int> r_sum ( vector<int> &v){
    for ( int i = 1 ; i < v.size() ; i++){
      v[i] += v[i-1];
    };
    return v;

  }

  void display ( vector<int> &v ){
    for (int i = 0 ; i < v.size() ; i++){
      cout << v[i] << " ";
    }
    cout <<endl;
  }


int main(){

  vector<int> nums ;
  int e, size ; 

  cout << "Size : ";
  cin >> size ;

  for( int i = 0 ; i < size ; i++){
    cout<<"value : " ;
    
    cin >> e ;

    nums.push_back(e);


  }

  display(nums);
  r_sum(nums);
  display ( nums);
  return  0;

  

}