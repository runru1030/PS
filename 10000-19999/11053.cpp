#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int N[n+1];
	int dp[n+1]={0};
	for(int i=1;i<=n;i++){
		cin>>N[i];
	}
	dp[1]=1;
	int m=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<i;j++){
			if(N[j]<N[i])
				dp[i]=max(dp[i], dp[j]);
		}
		dp[i]++;
		if(dp[i]>m)
			m=dp[i];
	}	
	
	cout<<m;
	return 0;
}