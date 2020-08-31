#include<iostream>
#include<algorithm>
using namespace std;

int N;
int rgb[1000][3]={0};
int d[1000][3]={0};

int cost(){
	d[0][0]=rgb[0][0];
	d[0][1]=rgb[0][1];
	d[0][2]=rgb[0][2];
	for(int i=1;i<N;i++){
		d[i][0]=min(d[i-1][1], d[i-1][2])+rgb[i][0];
	
		d[i][1]=min(d[i-1][0], d[i-1][2])+rgb[i][1];
	
		d[i][2]=min(d[i-1][0], d[i-1][1])+rgb[i][2];

	}
	return min(min(d[N-1][0], d[N-1][1]),min(d[N-1][1], d[N-1][2]));	
}
int main(){
	int min=3000;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>rgb[i][0]>>rgb[i][1]>>rgb[i][2];
		}
	cout<<cost();
	return 0;
}