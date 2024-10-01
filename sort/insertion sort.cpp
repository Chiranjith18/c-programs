#include<bits/stdc++.h>
#include<vector>
#include <iostream>
using namespace std;
void sort(vector <int> &arr,int n){
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    
}

void print(vector <int> &arr){
    for(auto &it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main() {
    vector<int> arr={11,5,6,2,9,3};
    int n=arr.size();
    //sorted={2,3,5,6,9,11}
    cout<<"print the unsorted list ";
    print(arr);
    sort(arr,n);
    cout<<"print the sorted list";
    print(arr);
    

    return 0;
}
