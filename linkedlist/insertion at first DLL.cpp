#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
};
Node* head=nullptr;
void insertatbegin(int data){
     Node* newNode = new Node();
     newNode->data = data;
     newNode->prev=nullptr;
     newNode->next=head;
     head=newNode;
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
    insertatbegin(4);
    while(head!=nullptr){
        cout<<head->data<<"->";
        head=head->next;
    }
  return 0;
}
