#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left=low; //start ind of 1st subarr
    int right=mid+1;//start ind of 2nd subarr
    //sorted element to be kept in temp array.
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
         temp.push_back(arr[right]);
        right++;
    }

//transfering all elements from temp to arr
for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];
  }
}



void mergesort(vector<int> &arr,int low,int high){
    if(low>=high){
       return;        
    }
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}


void print(vector<int> &arr){
    for(auto &it:arr){
        cout<<it<<" ";
    }
    
}

int main() {
    vector<int> arr={12,4,2,5,8,21};
    //sorted arr={2,4,5,8,12,21}
    cout<<"unsorted array";
    print(arr);
    int n=arr.size();
    mergesort(arr,0,n-1);
    cout<<"sorted array";
    print(arr);

    return 0;
}
