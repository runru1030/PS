#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

vector<int> v[10001];
vector<int> res;
int visit[10001]={0};
int n, m;
int num=0;
void dfs(int start){
	visit[start]=1;
	for(int i=0;i<v[start].size();i++){
		int nex=v[start][i];
		if(!visit[nex]){
			num++;
			dfs(nex);
			
		}
	}
	
}
int main(){
	int max=-1;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a, b;
		cin>>a>>b;
		v[b].push_back(a);
	}
	
	for(int i=1;i<=n;i++){
		
		dfs(i);
		if(max==num)res.push_back(i);
		if(max<num){
			max=num;
			res.clear();
			res.push_back(i);
		}
	
		
		num=0;
		memset(visit, 0, sizeof(visit));			
	}
	
	sort(res.begin(), res.end());
	
	
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	return 0;
}
