#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int n, m;
string map[101][101];
string radix(string a, string b){
	string res;
	int sum=0;
	while(!a.empty()||!b.empty()||sum){
		if(!a.empty()){
			sum+=a.back()-'0';
			a.pop_back();
		}
		if(!b.empty()){
			sum+=b.back()-'0';
			b.pop_back();
		}
		res.push_back((sum%10+'0'));
		sum/=10;
	}
	reverse(res.begin(), res.end());
	return res;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m&&j<=i;j++){
			if(j==1)map[i][j]=to_string(i);
			else if(j==i)map[i][j]=1+'0';
			else map[i][j]=radix(map[i-1][j-1],map[i-1][j]);
			if(i==n&&j==m){
				cout<<map[i][j];
				return 0;
			}
		}
	}

}
