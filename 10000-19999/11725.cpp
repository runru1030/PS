#include<iostream>
#include<vector>
using namespace std;

int p[100001]={0};
vector<vector<int> >v;
void fun(int idx){
	for(int i=0;i<v[idx].size();i++){
		int child=v[idx][i];
		if(child!=p[idx]){
			
			p[child]=idx;
			fun(child);
		}
	}
}
int main(){
	int n;
	cin>>n;
	v.resize(n+1);
	for(int i=0;i<n-1;i++){
		int a, b;
		cin>>a>>b;
		if(a==1){
			p[b]=1;
			fun(b);
		}	
		else if(b==1){
			p[a]=1;
			fun(a);
		}	
		else{
			if(p[a]!=0){
				p[b]=a;
				fun(b);
			}	
			else if(p[b]!=0){
				p[a]=b;
				fun(a);
			}	
			else{
				v[a].push_back(b);
				v[b].push_back(a);
			}
		}
	}
	for(int i=2;i<=n;i++){
		cout<<p[i]<<"\n";
	}
}
