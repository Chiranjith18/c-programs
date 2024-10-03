#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int data1){
        data=data1;
        prev=next=nullptr;
    }
};
Node* insertatend(Node* head,int data){
    Node* newnode=new Node(data);
   if(head==nullptr){
       return newnode;
   }
   Node* lastnode=head;
   while(lastnode->next!=nullptr){
       lastnode=lastnode->next;
   }
  lastnode->next=newnode;
  return head;
}


void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<"->";
        head=head->next;
    }
}
int main(){
    Node* head=new Node(1);
      Node* first=new Node(2);
      Node* second=new Node(3);
      head->next=first;
     first->next=second;
     first->prev=head;
     second->prev=first;
     second->next=nullptr;
 cout<<"before"<<endl;
    print(head);
   cout<<endl;
    cout<<"after"<<endl;
    insertatend(head,4);
    print(head);
   return 0; 
}
