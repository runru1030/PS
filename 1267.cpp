#include<iostream>

using namespace std;

int main(){
	int n;
	int y=0, m=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		y+=(c/30+1)*10;
		m+=(c/60+1)*15;
		
	}

	if(y>m)cout<<"M "<<m;
	if(y<m)cout<<"Y "<<y;
	if(y==m)cout<<"Y M "<<y;
	return 0;
} 