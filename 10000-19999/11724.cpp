#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m;
vector <vector<int> > v;
int sub[1001]={0};
int cnt=0;
void fun(int idx){
	
	sub[idx]=1;
	for(int i=0, j=0;i<v[idx].size();i++){
		int next=v[idx][i];
		if(!sub[next])fun(next);
			
	}
}

int main(){
	cin>>n>>m;

	v.resize(n+1);
	
	for(int i=0;i<m;i++){
		int a, b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	while(1){
		int p=find(sub+1, sub+(n+1), 0)-sub;

		if(p==n+1){
			cout<<cnt;
			return 0;
		}
		else {
			cnt++;
			fun(p);	
		}
	}


}
