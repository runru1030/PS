#include<iostream>
#include<vector>

using namespace std;
int visit[101]={0};
vector< vector<int> > v(101);
int cnt=-1;
void search(int a){
	cnt++;
	visit[a]=1;
	for(int i=0;i<v[a].size();i++){
		if(!visit[v[a][i]])search(v[a][i]);
	}
}
int main(){
	int n, m;
	cin>>n>>m;

	for(int i=0;i<m;i++){
		int a, b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	search(1);
	cout<<cnt;
}

