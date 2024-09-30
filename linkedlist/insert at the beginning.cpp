#include <iostream>
using namespace std;
struct Node{
   int data;
   Node* next;
   Node(int data1){
       data=data1;
       next=nullptr;
   }
};
void printlist(Node* head){
    Node* curr=head;
    for(curr=head;curr!=nullptr;curr=curr->next){
        cout<<curr->data<<"->";
    }
    cout<<"Null"<<endl;
}
//new head
Node* head=nullptr;
Node* insertfirst(Node* head,int data){
    Node* newnode=new Node(10);
    newnode->next=head;
    head=newnode;
    return newnode;
}



int main() {
    Node* head=new Node(20);
    head->next=new Node(30);
    head->next->next=new Node(40);
    printlist(head);
    head=insertfirst(head);
    printlist(head);

    return 0;
}
