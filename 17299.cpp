#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int F[1000001]={0};
vector <int> v;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		F[a]++;
		v.push_back(a);
	}
	int m=*max_element(F, F+1000001);
	
	int ngf;
	for(int i=0;i<n;i++){
		ngf=-1;
		if(m==F[v[i]]||i==n-1){
			cout<<"-1 ";
			continue;
		}
		for(int j=i+1;j<n;j++){
			if(F[v[i]]<F[v[j]]){
				ngf=v[j];
				break;
			}
		}
		if(ngf==-1)cout<<"-1 ";
		else cout<<ngf<<" ";
	}	
	return 0;	
}