#include <iostream>

using namespace std;


class Animal {
  public :
   string name;
   string sound;

   public :
    Animal (string name , string sound){
      this -> name = name;
      this -> sound = sound;
    }
    void Animal_Detail(){
      cout << "Animal Name : " << name <<endl;
      cout << "Animal Sound : " << sound <<endl;
      
    }
};

class Dog : public Animal {
  private : 
  string family;

  public : 
  Dog(string N , string S) : Animal(N, S){
    family = "Carnivore";
  }

  void Dog_detail(){
    Animal_Detail();
    cout << "Family : " << family <<endl ;
  }
};

class Sheep : public Animal {
  private : 
  string  color ; 

  public : 
  Sheep ( string N , string S)  : Animal(N, S){
    color =  "White";
  }

  void Sheep_detail(){
    Animal_Detail();
    cout << "color : "  << color <<endl ;
  }
  
};

int main(){
  
   Dog d("Pongo", "Woof Woof");
d.Dog_detail();
Sheep s("Billy", "Baaa Baaa");
s.Sheep_detail();
}



