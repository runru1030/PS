#include<iostream>
#include<vector>
#include<algorithm>
#define P pair<int, int>
using namespace std;

vector<P> xy;


bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second==b.second)return a.first<b.first;
	return a.second < b.second;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a, b;
		cin>>a>>b;
		xy.push_back(P(a, b));
	}
	sort(xy.begin(), xy.end(), cmp);
	for(int i=0;i<n;i++){
		P cur=xy[i];
		cout<<cur.first<<" "<<cur.second<<"\n";
	}
	return 0;
}