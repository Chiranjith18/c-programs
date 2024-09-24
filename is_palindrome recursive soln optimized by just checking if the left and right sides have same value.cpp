#include<iostream>
using namespace std;
bool rev(string str,int i,int n) {
  if(i>=n-1-i) {
      return true;
  }
    if(str[i]==str[n-1-i]) {
       return   rev(str,i+1,n);

      }
      else {
          return false;
      }

    }


void ispalin_drome(const string &str,int n) {
    if(rev(str,0,n)) {
        cout<<"it is a palindrome";
    }
    else {
        cout<<"not a palindrome";
    }
}
int main() {
    string c;
    cin>>c;
    int n = c.length();
    ispalin_drome(c,n);
}

