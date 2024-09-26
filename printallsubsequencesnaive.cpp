#include<bits/stdc++.h>
using namespace std;
void print(stack<string>v) {
    stack<string>temp;
    while(!v.empty()) {
        temp.push(v.top());
        v.pop();
    }
    while(!temp.empty()) {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}
void printallsubsequence(int arr[], stack<string>&v,int i,int n) {
if(i>=n) {
    print(v);
    return;
}
v.push(to_string(arr[i]));
printallsubsequence(arr,v,i+1,n);
    v.pop();
    printallsubsequence(arr,v,i+1,n);
}
int main() {
   int arr[]={3,1,2};
   stack<string>v;
  printallsubsequence(arr,v,0,3);
}

