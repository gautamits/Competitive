//multidimensional array traveral using single pointer
#include <iostream>
using namespace std;
int main(){
int a[2][3];
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        a[i][j]=i+j;
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<a[i][j]<<" ";
    }
}
cout<<endl;
int *p=a[0];
while(p < &a[1][3]) {
    cout<<*(p)<<" ";
    p++;
    }
cout<<endl;
//cout<<p<<endl;
return 0;
}
