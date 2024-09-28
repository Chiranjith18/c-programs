#include<bits/stdc++.h>
using namespace  std;
int printallsubsequences(int arr[],int i,int sum,int n,int k) {
    if(i==n) {
        if(sum==k) {
            return 1;
        }
        return 0;
    }

    sum+=arr[i];
   int l = printallsubsequences(arr,i+1,sum,n,k);

    sum-=arr[i];
  int r =  printallsubsequences(arr,i+1,sum,n,k);
    return l+r;
}
int main() {
    int k = 3;
    int n = 3;
    int arr[] ={1,2,1};
    cout<<printallsubsequences(arr,0,0,n,k);
}
