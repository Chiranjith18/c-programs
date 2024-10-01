#include<bits/stdc++.h>
using namespace  std;
void countofsubsequenceswithsumequalsknaive(int arr[],int i,int sum,int n,int k,int count) {
    static int fk=0;

    if(i==n) {
        if(sum==k) {
            fk++;
        }
        return;
    }

    sum+=arr[i];
    countofsubsequenceswithsumequalsknaive(arr,i+1,sum,n,k,count);

    sum-=arr[i];
    countofsubsequenceswithsumequalsknaive(arr,i+1,sum,n,k,count);
    if(i==0) {
        cout<<fk;
    }

}
int main() {
    int k = 3;
    int n = 3;
    int arr[] ={1,2,1};
    vector<int>v;
    countofsubsequenceswithsumequalsknaive(arr,0,0,n,k,0);
    cout<<endl;

}
