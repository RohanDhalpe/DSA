#include<iostream>
using namespace std;

void reverse(int s,int e,string &str){
    if(s>e) return;
    swap(str[s],str[e]);
    s++;
    e--;
    reverse(s,e,str);
}

int main(){
    string name="Mahabaleshwar";
    reverse(0,name.length()-1, name);
    cout<<name<<endl;
    return 0;
}
