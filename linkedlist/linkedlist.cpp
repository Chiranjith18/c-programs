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
    cout<<"null";
    
}
int main(){
    Node* vip=new Node(10);
    vip->next=new Node(20);
    vip->next->next=new Node(30);
    printlist(vip);

 
    return 0;
}
