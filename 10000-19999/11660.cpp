#include <iostream>

using namespace std;
int map[1025][1025]={0};

int dp[1025][1025]={0};
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n, m;
	cin>>n>>m;
	for(int r=1;r<=n;r++){
		for(int c=1;c<=n;c++){
			cin>>map[r][c];
		}
	}
	for(int r=1;r<=n;r++){
		for(int c=1;c<=n;c++){
				dp[r][c]=dp[r-1][c]+dp[r][c-1]-dp[r-1][c-1]+map[r][c];	
		}
	}
	for(int i=0;i<m;i++){
		int x1,y1, x2, y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<dp[x2][y2]-dp[x2][y1-1]-dp[x1-1][y2]+dp[x1-1][y1-1]<<"\n";
	}
}
