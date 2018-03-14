#include <iostream>
using namespace std;
int main(){
    int a[4];
    cout<<"base pointer to array is "<<a<<endl;
    for(int i=0;i<4;i++){
        cout<<"next pointer is "<<a+i<<" "<<&a[i]<<" "<<*(a+i)<<" "<<a[i]<<endl;
        }
return 0;
}
