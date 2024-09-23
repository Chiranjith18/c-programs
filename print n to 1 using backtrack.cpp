#include <iostream>
using namespace  std;
int count;
void print(int i,int n) {
    if(i>n) {
        return;
    }
   print(i+1,n);
    cout<<i<<endl;

}
int main()
{
    int n;
    cin>>n;
    print(0,n);
    return 0;
}
