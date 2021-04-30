#include<iostream>
#include<vector>
using namespace std;

int n, m;
vector<int> v;
void fun(int s, int m){
	if(m==1){
		for(int i=s;i<=n;i++){
			for(int j=0;j<v.size();j++)cout<<v[j]<<" ";
			cout<<i<<"\n";
		}
	}
	else{
		v.push_back(s);
		if(m==2)fun(s+1, 1);
		else{
			for(int i=s;i<=n&&m>2;i++)	fun(i+1, m-1);
		}
		v.erase(v.end()-1);
	}	
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++)	cout<<i<<"\n";
	}
	else{
		for(int i=1;i<=n;i++)	fun(i, m);		
	}
	
}
