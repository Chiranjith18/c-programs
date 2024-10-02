
#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;


int linearsearch(vector<int> &arr,int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={23,45,12,5,67,9};
    int x=67;
    int n=7;
   int result=linearsearch(arr,n,x);
    if(result==-1){
        cout<<"desired value not found";
    }else{
    cout<<"element "<<x<<" is at the key no "<<result;
    }
    return 0;
    
}
