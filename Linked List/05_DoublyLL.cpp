#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //Constructor
    Node(int d){
       this->data=d;
       this->prev=NULL;
       this->next=NULL;
    }
};

void PrintNodes(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl; 
}

int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insert_TO_Head(Node* &head,int d){
    Node* temp= new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insert_TO_Tail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* head,Node* &tail,int pos,int d){
    if(pos==1){
        insert_TO_Head(head,d);
        return;
    }
    Node* temp=head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }

    Node* NodeToInsert=new Node(d);
    NodeToInsert->next=temp->next;
    temp->next->prev=NodeToInsert;
    temp->next=NodeToInsert;
    NodeToInsert->prev=temp;


    if(temp->next==NULL){
        insert_TO_Tail(tail,d);
    }
}

void deleteNode(Node*  &head,int pos){
    if(pos==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
       Node* curr=head;
       Node* prev=NULL;
       int cnt=1;
       while (cnt<pos)
       {  prev=curr;
          curr=curr->next;
          cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}

int main(){
    Node* node1=new Node(11);
    Node* head=node1;
    Node* tail=node1;
    
    insert_TO_Head(head,23);
    insert_TO_Head(head,56);
    insert_TO_Head(head,89);
    insert_TO_Tail(tail,1561);
    insertAtPosition(head,tail,2,19);
    insertAtPosition(head,tail,6,7894);
    deleteNode(head,2);

    PrintNodes(head);


    return 0;
}
