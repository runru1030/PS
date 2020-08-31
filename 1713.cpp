#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int n, num;
vector<int> c;
int cnt[1001]={0};

void rep(int idx, int a){
	for(int i=idx;i<c.size();i++){
		if(i==c.size()-1){
			c[i]=a;
			break;
		}
		swap(c[i], c[i+1]);
	}
}
int main(){
	cin>>n>>num;
	for(int i=0;i<num;i++){
		int a, min=1001, idx=0, flag=-1;
		cin>>a;
		for(int j=0;j<c.size();j++){
			if(c[j]==a){
				cnt[a]++;
				flag=0;
				break;
			}
		}
		
		if(flag==-1){
			if(c.size()<n)c.push_back(a);
			else{
				for(int j=0;j<n;j++){
					if(min>cnt[c[j]]){
						min=cnt[c[j]];
						idx=j;
						
					}
				}
				cnt[c[idx]]=0;
				rep(idx, a);
				
			}
			cnt[a]++;	
		}
	
	}
	sort(c.begin(), c.end());
	for(int i=0;i<n;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}