#include <iostream>
#include<string.h>
#include <vector>
#include <queue>
using namespace std;
int n;
vector< vector<int> >v(500);
vector< vector<int> >map(500);

int DFS(int a, int b){
	if(map[a][b]==-1){
		DFS(a+1 ,b);
		DFS(a+1 ,b+1);
		map[a][b]=max(map[a+1][b], map[a+1][b+1])+v[a][b];	
	}
	return map[a][b];
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			int input;
			cin>>input;
			v[i].push_back(input);
			map[i].push_back(-1);
			if(i==n-1){
				map[i][j]=input;
			}
		}
	}
	DFS(0, 0);
	cout<<map[0][0];
	
}
