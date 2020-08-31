#include<iostream>

using namespace std;
long long int map[101][101]={0};
long long dp[101][101]={0};

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>map[i][j];
		}
	}
	dp[0][0]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i][j]==0)continue;
			int x=i+map[i][j];
			int y=j+map[i][j];
			if(x<=n)dp[x][j]+=dp[i][j];
			if(y<=n)dp[i][y]+=dp[i][j];
			}
	}

	cout<<dp[n-1][n-1];
	return 0;
}