#include<iostream>
#include<queue>
using namespace std;
priority_queue<int, vector<int>, greater<int> >pq;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int input;
		cin>>input;
		if(input==0){
			if(pq.size()!=0){
				cout<<pq.top()<<"\n";
				pq.pop();
			}
			else{
				cout<<0<<"\n";
			}
		}
		else{
			pq.push(input);
		}
	}
}
