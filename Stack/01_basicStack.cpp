#include<iostream>
using namespace std;

class stack{
   public:
   int top;
   int *arr;
   int size;

   stack(int size){
      this->size=size;
      top=-1;
      arr =new int[size];
   }

   void push(int element){
       if(size-top>1){
        top++;
        arr[top]=element;
       }else{
        cout<<"Stack Overflow";
       }
   }

   void pop(){
     if(top>=0){
        top--;
     }else{
        cout<<"Stack Underflow";
     }
   }

   int peek(){
        if(top>=0){
        return arr[top];
       }
       else{
         cout<<"Stack Empty"<<endl;
         return -1;
       }
   }
   
   bool isEmpty(){
     if(top==-1){
        return true;
     }else{
        return false;
     }
   }
};

int main(){
    stack st(6);
    st.push(1);
    st.push(15);
    st.push(41);
    st.push(91);

     cout<<st.peek()<<endl;

    return 0;
}
