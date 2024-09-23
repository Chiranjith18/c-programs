#include <iostream>
using namespace  std;
int count=0;
void print() {

    if(count==5) {
     return;
    }
    count++;
    cout<<"chiranjith"<<endl;
    print();
}
int main() {
print();
}