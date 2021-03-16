#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int N;
	cin>>N;

	for(int i=0;i<N;i++){
		
		char test[80];
		int sum=0;
		int p=0;
		cin>>test;

		for(int j=0;test[j];j++){
			if(test[j]=='O')	p++;	
			else	p=0;
			sum+=p;
		}		
		cout<<sum<<"\n";
	}
}
