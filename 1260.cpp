#include<iostream>
#include<queue>

using namespace std;

#define MAX 1001

int map[MAX][MAX]={0};
int visit[MAX]={0};
queue<int> q;
int n, m, v;

void dfs(int v){
	cout<<v<<" ";
	visit[v]=1;
	for(int i=1;i<=n;i++){
		if(map[v][i]&&!visit[i]){
			dfs(i);
		}
	}
}

void bfs(int v){
	visit[v]=1;
	q.push(v);
	
	while(!q.empty()){
		v=q.front();
		q.pop();
		
		cout<<v<<" ";
		for(int i=1;i<=n;i++){
			if(map[v][i]&&!visit[i]){
				q.push(i);
				visit[i]=1;
			}
		}
	}
}

int main(void){
	cin>>n>>m>>v;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		map[a][b]=1;
		map[b][a]=1;
	}
	dfs(v);
	cout<<"\n";
	for(int i=0;i<=n;i++){
		visit[i]=0;
	}
	bfs(v);
	cout<<"\n";
	return 0;
}