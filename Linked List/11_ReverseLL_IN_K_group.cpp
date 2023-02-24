#include <bits/stdc++.h> 

  Node* kReverse(Node* head, int k) {
  if(head==NULL){
     return NULL;
  }

   Node* prev=NULL;
   Node* curr=head;
   int count=0;
   Node* curnext=NULL;
                      
    while(curr!=NULL && count<k) {
       curnext=curr->next;
       curr->next=prev;
       prev=curr;
       curr=curnext;
       count++;
    }   
    
    if(curnext!=NULL){
      head->next=kReverse(curnext,k);
    }                       
  return prev;
}
