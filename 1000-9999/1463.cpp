#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int N;
int dp[1000001]={0};

int cnt(){
	for(int i=2;i<=N;i++){
		if(!(i%3)){
			dp[i]=min(dp[i/3],dp[i-1])+1;
		}
		else if(!(i%2)){
			dp[i]=min(dp[i/2], dp[i-1])+1;
		}
		else{
			dp[i]=dp[i-1]+1;
		}
	}
	return dp[N];	
}
int main(){
	cin>>N;
	cout<<cnt();
	return 0;
}