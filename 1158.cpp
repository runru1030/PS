#include<iostream>
#include<queue>

using namespace std;
queue<int> q;
int n, k, temp;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	cout<<"<";
	for(int j=0;j<n;j++){
		for(int i=1;i<k;i++){
			temp=q.front();
			q.pop();
			q.push(temp);
		}
		cout<<q.front();
		if(j<n-1)cout<<", ";
		
		q.pop();
		
	}
	cout<<">";
	return 0;
}