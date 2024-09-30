#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high) {
    int n1 = mid-low+1;
    int n2 = high-mid;
 int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++) {
        left[i] = arr[low+i];
    }
    for(int j=0;j<n2;j++) {
        right[j] = arr[mid+1+j];
    }
    int k=low;
   int i = 0;
    int j = 0;
    while(i<n1&&j<n2) {
        if(left[i]<=right[j]) {
            arr[k] = left[i];
            i++;
            k++;
        }
        else {
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1) {
    arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int low,int high) {
    if(low==high) {
        return;
    }
    int mid = low+(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main() {
    int arr[]={10,5,30,15,7};
    mergesort(arr,0,4);
    for(int x:arr) {
        cout<<x<<" ";
    }
}
