#include<iostream>

using namespace std;
int dp[12];
int main(){
	int t, n;
	cin>>t;
	dp[0]=0;
	dp[1]=1;
	dp[2]=dp[1]+1;
	dp[3]=dp[2]+dp[1]+1;
	for(int j=4;j<=11;j++){
			dp[j]=dp[j-1]+dp[j-2]+dp[j-3];
	}
	for(int i=0;i<t;i++){
		cin>>n;
		cout<<dp[n]<<"\n";
	}
}
