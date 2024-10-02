#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

int partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
   int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
        return j;
}

void qs(vector<int> &arr,int low,int high){
    if(low<high){
    int pindex=partition(arr,low,high);
    qs(arr,low,pindex-1);
    qs(arr,pindex+1,high);
    }
}
vector <int> quicksort(vector <int> &arr){
    qs(arr,0,arr.size()-1);
    return arr;
}

void print(vector<int> &arr){
    for(auto &it:arr){
        cout<<it<<" ";
    }
}

int main(){
    vector<int> arr={20,34,21,5,6,43,6};
    int n=arr.size();
    cout<<"before sorting";
    print(arr);
    arr=quicksort(arr);
    cout<<"after sorting";
    print(arr);
    return 0;
}
