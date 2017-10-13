#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	long long int a;
	long long int sum;
	while(t--){
		cin>>a;

		sum=0;
		long long int i;
		for(i=1;;i++){
			sum+=i;
			if(sum>=a) break;
		}
		long long int temp=a-(sum-i);
        long long int total=i+1;
        if(i%2==0)
            printf("TERM %lld IS %lld/%lld\n",a,temp,total-temp);
        else
            printf("TERM %lld IS %lld/%lld\n",a,total-temp,temp);


	}
}