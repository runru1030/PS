#include<iostream>

using namespace std;
int dp[100001]={0};
int main(){
	int n;
	cin>>n;
	dp[1]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j*j<=i;j++){
			if(dp[i]>dp[i-j*j]+1||dp[i]==0)
			dp[i]=1+dp[i-j*j];
		}
	}
	cout<<dp[n];
	return 0;
}