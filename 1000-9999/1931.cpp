#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector< pair<int, int> >v;
int cnt=0;
bool compare(const pair<int, int>& a, const pair<int, int>& b){
	if(a.second==b.second)return a.first<b.first;
	return a.second<b.second;
}

void meeting(int idx){
	cnt++;
	int i;
	if(idx!=v.size()-1){
		for(i=idx+1;i<v.size();i++)
			if(v[i].first>=v[idx].second)	break;
		if(i!=v.size())meeting(i);	

	}
	
}
int main(){
	int n, a, b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end(), compare);
	meeting(0);
	cout<<cnt;
}
