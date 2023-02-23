#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node* next;

   Node(int d){
     this->data=d;
     this->next=NULL;
   }
};

void insertNode(Node* &tail,int element,int d){
    if(tail==NULL){
        Node* NewNode=new Node(d);
        tail=NewNode;
        NewNode->next=NewNode;
    }else{
       Node* curr=tail;
       while(curr->data!=element){
        curr=curr->next;   //curr is at  element position
       }

       Node* temp=new Node(d);
       temp->next=curr->next;
       curr->next=temp;

    }
}

void PrintNode(Node *tail){
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while (tail!=temp);
    cout<<endl;
}

void DeleteNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"List IS Empty CHeck IT Again"<<endl;
        return;
    }else{
        Node* prev=tail;
        Node* curr=prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
         curr->next=NULL;
         delete curr;
    }
}
int main(){
    Node* tail=NULL;
    insertNode(tail,5,3);
    PrintNode(tail);
    insertNode(tail,3,6);
    insertNode(tail,6,12);
    insertNode(tail,12,14);
    DeleteNode(tail,6);
    PrintNode(tail);
    return 0;
}
