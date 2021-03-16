#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
int n;
pair <int, string> p;
vector <pair <int, string> > v;
bool compare(pair <int, string>a, pair <int, string>b){
	if(a.first==b.first){
		return a.second<b.second;
	}
	else{
		return a.first<b.first;
	}
}
int main(){
	cin>>n;
	string input;
	for(int i=0;i<n;i++){
		cin>>input;
		p.first=input.size();
		p.second=input;
		v.push_back(p);
	}
	sort(v.begin(), v.end(), compare);
	v.erase(unique(v.begin(), v.end()), v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i].second<<"\n";
	}
	
}
