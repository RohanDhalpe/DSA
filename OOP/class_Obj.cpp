#include<iostream>
using namespace std;
class hero{
    public:
   char name[100];
   int health;
   char level;
};
int main(){
    hero h1;
    h1.health=100;
   h1.level='A';
   
   cout<<h1.health<<" "<<h1.level<<endl;
    return 0;
}
