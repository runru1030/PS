#include<iostream>
using namespace std;

int main(){
	int n;
	int cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int input;

		cin>>input;
		int j;
		for(j=2;j<input;j++){
			if(input%j==0)break;
		}
		if(j==input)cnt++;
	}
	cout<<cnt;
}
