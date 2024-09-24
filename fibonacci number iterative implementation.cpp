#include<iostream>
using namespace std;

void fibonacci(int n) {
    int first = 0,second = 1;
   int ans = 0;
    for(int i=0;i<n-1;i++) {
      ans = first+second;
     first = ans;
        second =ans+second;
        cout<<ans<<" "<<" is the fibonacci number "<<n;
    }

}
int main() {
    int n;
    cout<<"find fibonacci of "<<endl;
    cin>>n;
    fibonacci(n);
}

