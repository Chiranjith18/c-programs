#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
void deletefirst(Node* head){
    delete(head);
}
void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"null";
}

int main() {
    Node* head=new Node(1);
    head->next=new Node(2);
 head->next =new Node(3);

    cout<<"before";
    print(head);
    deletefirst(head);
    cout<<"after";
    print(head);
    

    return 0;
}
