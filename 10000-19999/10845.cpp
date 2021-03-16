#include<iostream>
#include<string.h>
#include<queue>

using namespace std;
queue <int> q;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s=="push"){
			int input;
			cin>>input;
			q.push(input);
		}
		else if(s=="pop"){
			if(q.size()==0)cout<<"-1\n";
			else {
				cout<<q.front()<<"\n";
				q.pop();
			}
	
		}
		else if(s=="size")cout<<q.size()<<"\n";
		else if(s=="empty"){
			if(q.size()==0)cout<<"1\n";
			else cout<<"0\n";
		}
		else if(s=="front"){
			if(q.size()==0)cout<<"-1\n";
			else cout<<q.front()<<"\n";
			
		}
		else if(s=="back"){
			if(q.size()==0)cout<<"-1\n";
			else cout<<q.back()<<"\n";
			
		}
	}
}
