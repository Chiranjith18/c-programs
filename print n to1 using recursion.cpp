#include <iostream>
using namespace  std;
int count;
void print(int n) {
   if(n==0) {
       cout<<"returning"<<endl;
       return;
   }
    cout<<n<<endl;
    print(n-1);
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
