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
Node* deletefirst(Node* head){
    Node* temp=head;
    head=head->next;
    delete(temp);
    return head;
}
void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"null";
}

int main() {
    Node* head=new Node(1);
    head->next=new Node(2);
 head->next->next =new Node(3);
    cout<<"before"<<endl;
    print(head);
    head=deletefirst(head);
    cout<<"after"<<endl;
    print(head);
    

    return 0;
}
