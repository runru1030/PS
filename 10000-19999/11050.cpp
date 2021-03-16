#include<iostream>

using namespace std;
int fac(int a){
	if(a==0)return 1;
	int res=a--;
	while(a>0)res*=(a--);
		
	return res;
}
int main(){
	int n, k;
	cin>>n>>k;
	cout<<fac(n)/(fac(k)*fac(n-k));
}
