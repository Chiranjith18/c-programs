#include<bits/stdc++.h>
using namespace  std;
void printallsubsequences(int arr[],vector<int>&v,int i,int sum,int n,int k,int count) {
   static int fk=0;

   if(i==n) {
      if(sum==k) {
        fk++;
      }
      return;
   }
   v.emplace_back(arr[i]);
   sum+=arr[i];
   printallsubsequences(arr,v,i+1,sum,n,k,count);
      v.pop_back();
      sum-=arr[i];
      printallsubsequences(arr,v,i+1,sum,n,k,count);
   if(i==0) {
      cout<<fk;
   }

   }
int main() {
   int k = 3;
   int n = 3;
   int arr[] ={1,2,1};
   vector<int>v;
   printallsubsequences(arr,v,0,0,n,k,0);
}
