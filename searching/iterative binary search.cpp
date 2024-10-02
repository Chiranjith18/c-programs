#include<bits/stdc++.h>
#include<vector>

using namespace std;
//iterative binary search
int binarysearch(int arr[],int low,int high,int x){
    
    while(low<=high){
        int mid=(low+high)/2;
        //if element is present at mid
        if(arr[mid]==x){
            return mid;
        }
        // x is present at right of mid
        if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        return -1;
}
}

int main(){
    int arr[]={20,34,56,67,70};
    int x=67;
    int n=5;

    int result=binarysearch(arr,0,n-1,x);
    if(result==-1){
        cout<<"element not found";
    }else{
        cout<<"element is at key no "<< result;
 
    }
    
return 0;
}
