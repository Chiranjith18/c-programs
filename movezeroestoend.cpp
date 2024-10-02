#include<bits/stdc++.h>
using namespace std;
void movezeroes(int arr[],int n){
for(int i=0;i<n;i++){
   if(arr[i]==0){
       for(int j=i+1;j<n;j++){
          if(arr[j]!=0){
          swap(arr[i],arr[j]);
          }
       }
   }
}
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
movezeroes(arr,n);
for(int x:arr){
cout<<x<<" ";
}
}
