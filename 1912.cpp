#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int N[n+1]={0};
	int dp[n+1]={0};
	for(int i=1;i<=n;i++){
		cin>>N[i];
	}
	dp[1]=N[1];
	int m=N[1];
	for(int i=2;i<=n;i++){
		dp[i]=max(N[i], dp[i-1]+N[i]);
		if(dp[i]>m)m=dp[i];
	}
	cout<<m;
	
}