#include<iostream>

using namespace std;

int p(int n){
	int a;
	if(n==0)return 0;
	a=n%10;
	n/=10;
	return a+p(n);
}
int main(){
	int num, i;
	cin>>num;
	for(i=1;i<1000000;i++){
		if(p(i)+i==num){
			cout<<i;
			break;
			}
	}
	if(i==1000000)cout<<0;
	return 0;
	
}