#include<iostream>
#include<vector>
#include<queue>
#define P pair<int, int>
using namespace std;

int visit[10001];
vector<P> edge[10001];

int prim(){
	long long ans=0;
	priority_queue<P, vector<P>, greater<P> >pq;
	pq.push(P(0,1));
	
	while(!pq.empty()){
		P cur=pq.top();
		pq.pop();
		if(visit[cur.second])continue;
		visit[cur.second]=1;
		ans+=cur.first;
		
		for(int i=0;i<edge[cur.second].size();i++){
			if(!visit[edge[cur.second][i].second])
				pq.push(edge[cur.second][i]);
		}
	}
	return ans;
}

int main(){
	int v, e;
	cin>>v>>e;
	for(int i=0;i<e;i++){
		int a, b, c;
		cin>>a>>b>>c;
		edge[a].push_back(P(c, b));
		edge[b].push_back(P(c, a));
		
	}
	long long res=prim();
	cout<<res;
	return 0;
}