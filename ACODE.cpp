#include <bits/stdc++.h>
using namespace std;
int main(){
	char arr[5010];
	while(1){
		scanf("%s",arr);
		if(arr[0]=='0') break;
		long long int size=strlen(arr);
		if(size==1){
			cout<<1<<endl;
			continue;
		}
		unsigned long long int *dp = new unsigned long long int[size+1];
		dp[size]=1;
		if(arr[size-1] != '0')
			dp[size-1]=1;
		else dp[size-1]=0;
		for(long long int i=size-2;i>=0;i--){
			//cout<<arr[i]<<" ";
			if(arr[i]=='0')
				dp[i]=0;
			else if(arr[i]-'0' > 2)
				dp[i]=dp[i+1];
			else if(arr[i]-'0' ==2 )
			{
				if(arr[i+1]-'0' > 6)
					dp[i]=dp[i+1];
				else
					dp[i]=dp[i+1]+dp[i+2];
			}
			else
				dp[i]=dp[i+1]+dp[i+2];
			//for(int i=0;i<size;i++) cout<<dp[i]<<" ";
			//cout<<endl;
		}
		cout<<dp[0]<<endl;

		

	}
}