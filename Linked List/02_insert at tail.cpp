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

void insertAtTail(Node* &tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
   // tail=tail->next;
     tail=temp;

}
void insertAtPosition(Node* &head,int position,int d){
    Node* temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert->next;
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
    Node *tail=p;
    print(head);
    cout<<endl;

    insertAtTail(tail,40);
    insertAtTail(tail,30);
    insertAtTail(tail,88);
 // inserAtHead(head,10);
    print(head);
    return 0;
}

