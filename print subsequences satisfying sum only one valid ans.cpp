#include<bits/stdc++.h>
using namespace std;

void print(vector<string>v) {
    if(v.size()==0) {
        cout<<"{}"<<endl;
    }
    for(const auto ele:v) {
        cout<<ele<<" ";
    }
   cout<<endl;
}
void printallsubsequence(int arr[], vector<string>&v,int i,int n, int k) {
    static int sum=0;
    static bool found=false;
if(i>=n) {
    if(!found) {
        if(sum==k) {
            print(v);
            found=true;
        }
        return;
    }
}

v.push_back(to_string(arr[i]));
    sum+=arr[i];
printallsubsequence(arr,v,i+1,n,k);

    v.pop_back();
    sum-=arr[i];
    printallsubsequence(arr,v,i+1,n,k);

}
int main() {
   int arr[]={1,2,1};
  vector<string>v;
  printallsubsequence(arr,v,0,3,2);
}

