
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"address of a is "<<&a<<endl;
    int *p;
    cout<<"p points to "<<p<<endl;
    p=&a;
    cout<<"now p points to "<<p<<endl;
    cout<<"p has "<<*p<<endl;
    a=5;
    cout<<"now p has "<<*p<<endl;

    return 0;
    }
