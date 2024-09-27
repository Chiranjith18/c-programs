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
void printallsubsequence(int arr[], vector<string>&v,int i,int n) {
if(i==n) {
    print(v);
    return;
}
v.push_back(to_string(arr[i]));
printallsubsequence(arr,v,i+1,n);

    v.pop_back();
    printallsubsequence(arr,v,i+1,n);

}
int main() {
   int arr[]={3,1,2};
  vector<string>v;
  printallsubsequence(arr,v,0,3);
}

