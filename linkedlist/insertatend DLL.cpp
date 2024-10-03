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
    while(head->next!=nullptr){
        cout<<head->data<<"->";
        head=head->next;
    }
}
int main(){
    Node* head=new Node(1);
    head->prev=nullptr;
    Node* first=new Node(2);
    first->prev=head;
    head->next=first;
    Node* second=new Node(3);
    second->prev=first;
    second->next=nullptr;
    first->next=second;
    print(head);
    head=insertatend(head,4);
    cout<<"after";
    print(head);
   return 0; 
}
