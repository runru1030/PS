#include<iostream>

using namespace std;
int n, m;
int main(){
	int min1=1000, min2=1000;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a, b;
		cin>>a>>b;
		if(a<=min1)min1=a;
		if(b<=min2)min2=b;
		}
	if(min1<min2*6){
		if(((n%6)*min2)<min1){
			cout<<(n/6)*min1+(n%6)*min2;
		}
		else{
			cout<<(n/6+1)*min1;
		}
	}
	else{
		cout<<min2*n;
	}
	return 0;
}