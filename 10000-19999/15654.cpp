#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m;
vector<int>v, sub;
void fun(int s, int m){
	if(m==1){
		for(int i=0;i<n;i++){
			if(find(sub.begin(), sub.end(),v[i])==sub.end()){
				for(int j=0;j<sub.size();j++)cout<<sub[j]<<" ";
				cout<<v[i]<<"\n";
			}
		}
	}
	else{
		sub.push_back(v[s]);
		if(m==2)	fun(s+1, 1);
		else{
			for(int i=0;i<n;i++){
				if(find(sub.begin(), sub.end(),v[i])==sub.end()) fun(i, m-1);
			}
		}
		sub.erase(sub.end()-1);
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int input;
		cin>>input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	if(m==1){
		for(int i=0;i<n;i++)cout<<v[i]<<"\n";
	}
	else{
		for(int i=0;i<n;i++)	fun(i, m);
	}
}
