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
    while(head!=nullptr){
        cout<<head->data<<"->";
        head=head->next;
    }
  
    return 0;
}
