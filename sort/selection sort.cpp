#include <iostream>
#include<vector>
using namespace std;
void sort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
        }
    }
}


void print(vector<int> &arr){
    for(auto &it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main() {
   vector<int> arr={12,2,54,32,7};
   //sorted={2,7,12,32,54}
   int n=arr.size();
   cout<<"unsorted array";
   print(arr);
   sort(arr,n);
   cout<<"sorted array";
   print(arr);
    return 0;
}
