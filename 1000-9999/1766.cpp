#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int> > v;
int * in;
int n, m, cnt=0;
void p_sort(){
	for(int i=1;i<=n;i++){
		if(in[i]==0){
			cout<<i<<" ";
			cnt++;
			in[i]=-1;
			for(int j=0;j<v[i].size();j++){
				in[v[i][j]]--;
			}
			break;
		}
	}
	if(cnt<n)p_sort();
}
int main(){

	cin>>n>>m;
	for(int i = 0; i < n + 1; i++)v.push_back(vector<int>());
    in = new int[n+1];
    for(int i = 0; i < n + 1; i++)in[i] = 0;
 
	for(int i = 0 ; i < m; i++){
        int a, b;
        cin>>a>>b;
        v[a].push_back(b);
        in[b] ++;
    }
    p_sort();
   
	return 0;
	

}