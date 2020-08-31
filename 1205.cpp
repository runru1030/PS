#include<iostream>
#include<vector>
using namespace std;
vector<int> sc;
int main(){
	int n, s, p;
	int rank=1;
	cin>>n>>s>>p;
	for(int i=1;i<=n;i++){
		int k;
		cin>>k;
		sc.push_back(k);
		}
	if(n==p&&sc[n-1]>=s)cout<<"-1";
	else{
		for(int i=0;i<n;i++){
			if(sc[i]>s)rank++;
		}
		cout<<rank;
	}
		
	
	return 0;
}