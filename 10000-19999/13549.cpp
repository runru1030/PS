#include<iostream>
#include<queue>
using namespace std;
int n, k;
int dp[100001]={0};
queue<pair<int, int> > q;
int bfs(){
	while(q.size()>0){
		int f=q.front().first;
		int d=q.front().second;
		q.pop();
		dp[f]=1;
		if(f==k)return d-1;
		d++;
		if((f*2)>=0&&(f*2)<=100000&&!dp[f*2])q.push(make_pair(f*2, d-1));
		if((f-1)>=0&&(f-1)<=100000&&!dp[f-1])q.push(make_pair(f-1, d));
		if((f+1)>=0&&(f+1)<=100000&&!dp[f+1])q.push(make_pair(f+1, d));
	}
	
}
int main(){
   cin>>n>>k;
   q.push(make_pair(n, 1));
   cout<<bfs();;
}
