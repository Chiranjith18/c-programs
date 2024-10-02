#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
int rotate(int arr[],int n,int temp){
    temp=arr[0];
   for(int i=1;i<n;i++){
       arr[i-1]=arr[i];
   }
   arr[n-1]=temp[0];
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=arr.size();
    int temp;
    temp=arr[0];
    arr=rotate(arr,n,temp);
    cout<<"rotated by 1";
    
    return 0;
}
