#include<iostream>
using namespace std;

class hero{
   private:
   int health;
   
    public:
    int getHealth(){
        return health;
    }

   void setHealth(int h){
    health=h;
   }

};
int main(){
    hero ram;
    ram.setHealth(23);
    cout<<ram.getHealth()<<endl;

   return 0;
}
