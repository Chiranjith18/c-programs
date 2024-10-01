#include<bits/stdc++.h>
using namespace std;
void findallcombination(int *arr,int target,vector<vector<int>> &ans,vector<int> &ds,int i,int n) {
if(i==n) {
   if(target==0) {
       ans.emplace_back(ds);
   }
    return;
}
    if(arr[i]<=target) {
        ds.emplace_back(arr[i]);
        findallcombination(arr,target-arr[i],ans,ds,i,n);
        ds.pop_back();
    }
    findallcombination(arr,target,ans,ds,i+1,n);
}
int main() {
    int arr[]={2,3,6,7};
    int target = 7;
    vector<vector<int>>ans;
    vector<int>ds;
    findallcombination(arr,target,ans,ds,0,4);
cout<<"the combinates which give sum equal to target "<<target<<" are "<<endl;
    for(const auto &x : ans) {
        for(const auto y:x) {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}
