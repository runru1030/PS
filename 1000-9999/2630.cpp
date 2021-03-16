#include<iostream>

using namespace std;
int n;
int mp[128][128]={0};
bool eq=true;
int cnt_b=0;
int cnt_w=0;

void func(int x1, int x2, int y1, int y2){
	eq=true;
	if(x1==x2){
		if(mp[y1][x1]==1)cnt_b++;
		else cnt_w++;
	}
	else{
		int mid=(x2-x1)/2;
		for(int i=y1;i<=y2&&eq;i++){
			for(int j=x1;j<=x2;j++){
				
				if(mp[y1][x1]!=mp[i][j]){
					eq=false;
					break;
				}
				
				if(i==y2&&j==x2){
					if(mp[i][j]==1)	cnt_b++;
					else cnt_w++;
				}
			}
		}
		
		if(eq==false){
			func(x1, x1+mid, y1, y1+mid);
			func(x1, x1+mid, y1+mid+1, y2);
			func(x1+mid+1, x2, y1+mid+1, y2);
			func(x1+mid+1, x2, y1, y1+mid);
		}
	}	
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mp[i][j];
		}
	}
	func(0, n-1, 0, n-1);
	cout<<cnt_w<<"\n"<<cnt_b;
}

