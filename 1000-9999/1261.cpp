#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;
int n, m;
int x[4]={0, 0, 1, -1};
int y[4]={1, -1, 0, 0};
int map[100][100];
int visit[100][100]={0};
vector <int>aoj;
int cnt=0;

int search(int a, int b){
	visit[a][b]=1;
	if(a==n&&b==m) {
		aoj.push_back(cnt);
		cnt=0;
	}
	else{
		if(map[a][b]==1)cnt++;
		for(int i=0;i<4;i++){
			if(a+x[i]<n&&a+x[i]>=0&&b+y[i]<m&&b+y[i]>=0&&!visit[a+x[i]][b+y[i]]){
			
				search(a+x[i], b+y[i]);
				visit[a+x[i]][b+y[i]]=0;
			}
		}
	}
	
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n*m;i++)
		scanf("%1d", &map[i/m][i%m]);
	search(0, 0);
	cout<<*min_element(aoj.begin(), aoj.end());


}
