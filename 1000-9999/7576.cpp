#include<iostream>
#include<queue>

using namespace std;
int m, n;
queue<pair<int,int> >q;
int map[1000][1000]={0};
int main(){
	cin>>m>>n;
	int cnt_one=0, cnt_mi=0;
	
	for(int i=0;i<m*n;i++){
		int input;
		cin>>input;
		
		if(i==0)map[0][0]=input;
		else map[i/m][i%m]=input;
		
		if(input==1){
			q.push(make_pair(i, 0));
			cnt_one++;
		}
		else if(input==-1)cnt_mi++;
	}
	if(cnt_one&&cnt_one+cnt_mi==m*n){
		cout<<0;
		return 0;
	}
	while(!q.empty()){
		int f=q.front().first;
		int d=q.front().second;
		int fc=0, fr=0;
		if(f>0){
			fc=f/m;
			fr=f%m;
		}
		int c[4]={fc-1, fc+1, fc, fc};
		int r[4]={fr, fr, fr+1, fr-1};
		
		for(int i=0;i<4;i++){
			if(c[i]>=0&&c[i]<n&&r[i]>=0&&r[i]<m&&map[c[i]][r[i]]==0){
					q.push(make_pair(m*c[i]+r[i], d+1));
					map[c[i]][r[i]]=1;
					cnt_one++;
			}
			if(cnt_one+cnt_mi==m*n){
				cout<<d+1;
				return 0;
			}
		}
		q.pop();
	}
	cout<<-1;
	return 0;
}
