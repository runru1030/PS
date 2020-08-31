#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define INF 987654321
using namespace std;
int d[101][101];
int c=0;
int main(){
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				d[i][j] = INF; 
			}
		}
	for(int i=0;i<m;i++){
		int a, b;
		cin>>a>>b;
		d[a][b]=1;
		d[b][a]=1;

	}

	for(int k=1;k<=n;k++){
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				if(i==j)	continue;
				if(d[i][k]!=INF&&!d[k][j]!=INF){
					d[i][j]=min(d[i][k]+d[k][j], d[i][j]);
				}
			}
		}
	}
	int min=INF;
	int kev;
	for(int i=1;i<=n;i++){
		c=0;
		for(int j=1;j<=n;j++){
			if(i==j)continue;
			c+=d[i][j];
		}
		if(c<min){
			min=c;
			kev=i;
		}
	
		
	}
	cout<<kev;
	return 0;

	
}