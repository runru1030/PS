#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> l;
vector<string> ls;
int main(){
	int n, m;
	cin>>n>>m;
	l.resize(n);
	for(int i=0;i<n;i++){
		cin>>l[i];
	}
	sort(l.begin(), l.end());
	for(int i=0;i<m;i++){
		string s;
		cin>>s;
		if(binary_search(l.begin(), l.end(), s)){
			ls.push_back(s);
		}
	}
	sort(ls.begin(), ls.end());
	cout<<ls.size()<<"\n";
	for(int i=0;i<ls.size();i++){
		cout<<ls[i]<<"\n";	
	}
	return 0;
}