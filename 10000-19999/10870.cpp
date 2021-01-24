#include<iostream>

using namespace std;

int func(int a, int b, int num){
	if(num==0)return a;
	return func(b, a+b, --num);
}
int main(){
	int n;
	cin>>n;
	cout<<func(0, 1, n);
	return 0;
}