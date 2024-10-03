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
Node* deletelast(Node* head){
     if(head==nullptr){
       return head;
   }
   if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    Node *curr=head;
    while(curr->next->next!=nullptr){
        curr=curr->next;
    }
    delete(curr->next);
    curr->next=nullptr;
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
    head->next=first;
    first->prev=head;
    Node* second=new Node(3);
    first->next=second;
    second->prev=first;
    second->next=nullptr;

    print(head);
    head=deletelast(head);
    cout<<"after";
    print(head);

   return 0; 
}
