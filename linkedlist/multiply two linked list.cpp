#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
int multiply(Node* first,Node* second ){
    int num1=0,num2=0;
    while(first!=nullptr){
        num1=(num1*10+ first->data);
        first=first->next;
    }
    while(second!=nullptr){
         num2=(num2*10+second->data);
        second=second->next;
    }
    return (num1*num2);
}

int main(){
    Node* l1=new Node(4);
    l1->next=new Node(3);
    Node* l2=new Node(6);
    int result =multiply(l1,l2);
    cout<<result;
    return 0;
}
