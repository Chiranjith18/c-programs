#include<bits/stdc++.h>
#include<vector>
#include<iostream>
//d=3
using namespace std;
int j=1;

void rotate(int arr[],int n,int d){
int j=1;
while(j<=d){
   int temp=arr[0];
   for(int i=1;i<n;i++){
       arr[i-1]=arr[i];
   }
   arr[n-1]=temp;
}
}

void print(int arr[],int n){
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" "; 
   }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d;
    cout<<"print the no of time u want to rotate the array";
    cin>>d;
    rotate(arr,n,d);
    cout<<"rotated by 1"<<endl;
    print(arr,n);
   
    
    return 0;
}
