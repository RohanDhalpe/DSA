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
//    ~Node(){
//         delete next;
//         this -> next = NULL;
//    }
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
    temp->next=nodeToInsert;
}

void deleteNode(Node*  &head,int pos){
    if(pos==1){
        Node* temp=head;
        head=head->next;
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
        prev->next=curr->next;
        curr -> next = NULL;
        // int b=curr->data;
        delete curr;

    }
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

    insertAtTail(tail,19);
    insertAtPosition(head,2,40);
    insertAtTail(tail,77);
    print(head);
cout << "\n";
    deleteNode(head,5);
    print(head);
    return 0;
}

