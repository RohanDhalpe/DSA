
#include<iostream>
using namespace std;

void ReverseString(char name[],int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        swap(name[low],name[high]);
        low++;
        high--;
    }
}

int getLength(char name[])
{   int count=0;
    for(int i=0; name[i]!='\0';i++)
    {  count++; }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name:"<<endl;
    cin>>name;
    // name[2]='\0';
    cout<<"Your name is "<<name<<endl;
    int n=getLength(name);

     ReverseString(name,n);
    cout<<"Reversed String is: "<< name;

    return 0;
}
