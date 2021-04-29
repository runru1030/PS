#include<iostream>
#include<queue>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n, m, size;
	cin>>n;
	for(int i=0 ;i<n;i++){
		cin>>m;
		int size=0;
		priority_queue<long long, vector<pair<long long, int> > pq1;
		priority_queue<long long, vector<pair<long long, int> >, greater<long long> >pq2;
		for(int j=0;j<m;j++){
			
			char op;
			long long input;
		
			cin>>op>>input;
			if(op=='I'){
				pq1.push(make_pair(input, 0));
				pq2.push(make_pair(input, 0));
				size++;
			}
			else if(op=='D'&&size>0){
				if(size==1||input==-1){
					pq2.pop();
					
					
				}
				else if(size==1||input==1){
					pq1.pop();
				}
				size--;
			}
		}
		if(size>0)cout<<pq1.top()<<" "<<pq2.top()<<"\n";
		else if(size==1)cout<<pq1.top()<<"\n";
		else if(size==0)cout<<"EMPTY\n";

	}
}
