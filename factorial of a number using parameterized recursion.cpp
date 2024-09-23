#include <iostream>
using namespace  std;
int count;
void factorial(int n,int i,int f) {
    if(i>n) {
        cout<<f<<endl;
        return;
    }
  factorial(n,i+1,f*i);
}
int main()
{
    int n;
    cin>>n;
  factorial(n,1,1);
    return 0;
}
