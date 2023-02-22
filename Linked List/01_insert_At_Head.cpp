#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
    this->data=data;
    this->next=NULL;
   }
};

void inserAtHead( Node* &head,int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;

}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* p=new Node(50);
   // cout<< p->data<<" "<<p->next;
    Node *head=p;
    print(head);
    cout<<endl;

  inserAtHead(head,10);
    print(head);
    return 0;
}

