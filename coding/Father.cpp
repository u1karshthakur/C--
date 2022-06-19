#include <iostream>

using namespace std;

class Father{
  public :
  string eye_color;
  string hair_color;

  public :

  Father(string ec  , string hc){
    eye_color = ec;
    hair_color = hc;
  }

  void Father_traits(){
    cout << "Eye Color : " << eye_color << endl;
    cout << "Hair Color : " << hair_color << endl;

  }
};

class Son  : public  Father {
  private :
   string name;

   public : 
   Son  (string n ,string ec , string hc ) : Father(ec,hc){
    name = n;
   }

   void Son_traits(){
    Father_traits();
    cout << name << " " << " has  beard" <<endl;

   }
};

class Daughter : public Father { 
  private : 
  string name;

  public : 

  Daughter  (string n , string ec , string hc ) : Father(ec,hc){
    name = n;
  }

  void Daughter_traits(){
    Father_traits();

    cout <<  name << " has long hair" <<endl;
    }
  
};

int main(){
  Daughter obj("Rapunzel","Green","Golden");
obj.Daughter_traits();

Son Obj("Ralph","Brown","Black");
Obj.Son_traits();
}
