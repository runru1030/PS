#include<iostream>
#define MAX 50

using namespace std;
char map[MAX][MAX]={NULL};
char w[8][8];
char b[8][8];
int n, m;
int wc=0, bc=0;

int s(){
	int min=64;	
	for(int x=0;x<=n-8;x++){
		for(int y=0;y<=m-8;y++){
			for(int i=0;i<8;i++){
				for(int j=0;j<8;j++){
					if(map[i+x][j+y]!=b[i][j])	bc++;
					if(map[i+x][j+y]!=w[i][j])	wc++;
					
					
				}		
			}
			if(wc>=bc&&min>bc)	min=bc;
			if(wc<bc&&min>wc)	min=wc;
			bc=0;
			wc=0;
		}
	}
	return min;
	
}
int main(){
	cin>>n>>m;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if((j-i)%2==0)
			{
				w[i][j]='W';
				b[i][j]='B';
			}
			else{
				w[i][j]='B';
				b[i][j]='W';
				
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	cout<<s();
	return 0;
}
