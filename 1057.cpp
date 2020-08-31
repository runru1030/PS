#include<iostream>

using namespace std;

int n, a, b;

int round(int x, int y){
	int num=1;
	while(!(y-x==1&&y%2==0)){
		if(x%2==0)	x/=2;
		else	x=x/2+1;
		
		if(y%2==0)	y/=2;
		else	y=y/2+1;
		num++;
	}
	return num;
}

int main(){
	cin>>n>>a>>b;
	if(a>b)cout<<round(b, a);
	if(b>a)cout<<round(a, b);
	return 0;
}