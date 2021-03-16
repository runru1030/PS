#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
map<string, int> mp;
int main(){
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	int n, m;
	cin>>n>>m;
	string c[n+1];
	for(int i=1;i<=n;i++){
		string p;
		cin>>p;
		c[i]=p;
		mp.insert(pair<string, int>(p, i));
	}
	for(int i=0;i<m;i++){
		string s;
		cin>>s;
		if(s[0]>='1'&&s[0]<='9'){
			int a=stoi(s);
			cout<<c[a]<<"\n";
		}
		else{
			cout<<mp[s]<<"\n";
		}
	}
}
