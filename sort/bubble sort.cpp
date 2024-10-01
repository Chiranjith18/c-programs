#include<bits/stdc++.h>
#include<vector>
#include <iostream>
using namespace std;
void sort(vector <int> &arr,int n){
    for(int i=0;i<n-1;i++){
        bool swapp=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapp=true;
            }
        }
        if(!swapp){
            break;
        }
    }
}

void print(vector <int> &arr){
    for(auto &it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main() {
    vector<int> arr={23,13,45,12,41};
    int n=arr.size();
    //sorted={12,13,23,41,45}
    cout<<"print the unsorted list ";
    print(arr);
    sort(arr,n);
    cout<<"print the sorted list";
    print(arr);
    

    return 0;
}
