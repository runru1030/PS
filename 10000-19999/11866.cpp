#include<iostream>
#include<vector>
using namespace std;
vector <int> v(1,0);
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<n+1;i++)	v.push_back(i);

	cout<<"<";
	for(int i=k;n>0;){
		if(n==1){
			cout<<v[i]<<">";
			return 0;
		}
		else 	cout<<v[i]<<", ";
		
		v.erase(v.begin()+i);
		i=(i+k-1)%(--n);
		if(i==0)i=n;
		
	}
}
