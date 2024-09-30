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

Node* insert(Node* head,int data){
    Node* newnode=new Node(data);
    newnode->next=head;
    head=newnode;
    return head;
}



int main() {
    Node* head=nullptr;
    head=insert(head,5);
    head=insert(head,10);
    head=insert(head,15);
    head=insert(head,20);
    cout<<"linked list before";
    printlist(head);
    head=insert(head,3);
    cout<<"linked list after";
    printlist(head);

    return 0;
}
