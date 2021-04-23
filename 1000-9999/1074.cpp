#include<iostream>
#include<cmath>
using namespace std;
int N, r, c;
int res=0;
int map[2][2]={0};
int fun(int num, int cnt){
	
	int x, y;
	int n=pow(2, num);
	
	map[0][0]=cnt+0;
	map[0][1]=map[0][0]+ pow(2, num-1)*pow(2, num-1);
	map[1][0]=map[0][1]+ pow(2, num-1)*pow(2, num-1);
	map[1][1]=map[1][0]+ pow(2, num-1)*pow(2, num-1);

	if((r+1)>n/2){
		x=1;
		r-=n/2;
	}
	else x=0;
	
	if((c+1)>n/2){
		y=1;
		c-=n/2;
	}
	else y=0;
	
	res=map[x][y];
	

	if(num>1)fun(num-1, res);
	
	return res;
}
int main(){
	cin>>N>>r>>c;
	cout<<fun(N, 0);
	
}
