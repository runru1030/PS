#include<iostream>
#include<vector>
#include<string.h>

using namespace std;
int t;
int n, k, w;
vector <int>cost;
vector <int>dp;
vector <vector<int> >order;


void search(int s){
	if(order[s].size()==0)dp[s]= cost[s];
	else{
		int max=-1;
		for(int i=0;i<order[s].size();i++){
			if(dp[order[s][i]]==-1)search(order[s][i]);
			
			if(max<dp[order[s][i]])max=dp[order[s][i]];
			
		}
		dp[s]= max+cost[s];
	}
	
}

int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		
		dp=vector <int>(n+1, -1);
		order=vector <vector<int> >(n+1);
		cost=vector <int>(n+1, 0);
		
		for(int i=1;i<=n;i++)	cin>>cost[i];

		for(int i=0;i<k;i++){
			int a, b;
			cin>>a>>b;
			order[b].push_back(a);
		}

		cin>>w;
		
		search(w);
		cout<<dp[w]<<"\n";


	}
}

