#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int a, b;
vector <int> v;
int main(){
	cin>>a>>b;
	int n1=min(a, b);
	int n2=max(a, b);
	int max_n=-1;
	int min_n=n2*n1;
	for(int i=1;i<=n1;i++)	if(n1%i==0)v.push_back(i);
	
	for(int i=n1;i>=1;i--){
		if(n2%i==0 && find(v.begin(), v.end(), i)!=v.end())max_n=max(i, max_n);
		if((n2*i)%n1==0)min_n=n2*i;
	}
	cout<<max_n<<"\n"<<min_n;
}
