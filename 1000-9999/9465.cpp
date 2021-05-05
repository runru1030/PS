#include<iostream>
#include<algorithm>
using namespace std;
int dp1[100001]={0};
int dp2[100001]={0};
int map[2][100000]={0};
int main(){
	int t, n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<2*n;j++){
			if(j==0)cin>>map[0][0];
			else cin>>map[j/n][j%n];
		}
		dp1[0]=map[0][0];
		dp2[0]=map[1][0];
		dp1[1]=dp1[0]+map[1][1];
		dp2[1]=dp2[0]+map[0][1];

		for(int j=2;j<n;j++){
			dp1[j]=max(dp1[j-1],dp2[j-2])+map[j%2][j];
			dp2[j]=max(dp2[j-1],dp1[j-2])+map[(j+1)%2][j];
		}
		cout<<max(dp1[n-1],dp2[n-1])<<"\n";
	}
}
