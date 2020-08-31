#include<iostream>

using namespace std;

int mp[51][51];
bool visit[51][51];
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
int m, n, num;
void dfs(int x, int y){
	visit[x][y]=true;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if (0 <= nx && nx < n && 0 <= ny && ny < m){
		
			if(mp[nx][ny]&&!visit[nx][ny]){
				visit[nx][ny]=true;
				dfs(nx, ny);
			}
		}
	}
}

int main(){
	int N;
	cin>>N;
	while(N--){
		
		int count=0;
	
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				mp[i][j]=0;
				visit[i][j]=false;
			}
		}
		cin>>m>>n>>num;
		for(int i=0;i<num;i++){
			int a, b;
			cin>>a>>b;
			if (0 <= a && a < m && 0 <= b&& b< n){
				mp[b][a]=1;
			}
		} 		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(mp[i][j]&&!visit[i][j]){
					dfs(i, j);
					count++;
				}
			}
		}		
		cout<<count<<"\n";
	}
	return 0;
}
