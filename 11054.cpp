#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int N[n+1];
	int dp1[n+1]={0};
	int dp2[n+1]={0};
	
	for(int i=1;i<=n;i++){
		cin>>N[i];
	}
	dp1[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<i;j++){
			if(N[j]<N[i])
				dp1[i]=max(dp1[i], dp1[j]);
		}
		dp1[i]++;
	}	
	
	dp2[n]=1;
	for(int i=n-1;i>=1;i--){
		for(int j=n;j>i;j--){
			if(N[j]<N[i])
				dp2[i]=max(dp2[i], dp2[j]);
		}
		dp2[i]++;
	}	
	int m=-1;
	for(int i=1;i<=n;i++){
		int k;
		k=dp1[i]+dp2[i]-1;
		if(m<k)m=k;
	}
	cout<<m;
	return 0;
}