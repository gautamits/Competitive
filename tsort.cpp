#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[1000000]={0};
  int j;
  for(int i=0;i<n;i++){
    cin>>j;
    arr[j]=arr[j]+1;
  }
  for(int i=0;i<1000000;i++){
    for(int j=0;j<arr[i];j++){
      cout<<i<<endl;
    }
  }
  return 0;
}