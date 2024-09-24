#include <iostream>
using namespace  std;
int count;
void reverse(int arr[],int n) {
    int i=0,j=n-1;
    while(i<j) {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main()
{
   
 int arr[] = {3,5,6,2,6};
    reverse(arr,5);
    for(int x:arr) {
        cout<<x<<" ";
    }
    return 0;
}
