#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int size) {
    int low = 0;
    int high = size-1;
    while(low<high) {
        int mid = low+high-low/2;
        if(arr[mid]>n) {
            high=mid-1;
        }
        else if(arr[mid]<n){
            low=mid+1;
        }
        else {
            return mid;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    cin>>n;
    cout<<"element "<<n<<" found at index "<<binary_search(arr,n,10);
}
