//array traversal using pointer
#include <iostream>
using namespace std;
int main(){
    int a[10];
    for (int i=0;i<10;i++){a[i]=i*i;}
    int *p=a;
    while(p++ < &a[9]) cout<<*p<<" ";
    cout<<endl;
return 0;
}
