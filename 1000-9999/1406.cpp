#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

int main(){
	stack<char> l,r;
	string s;
	cin>>s;
	int len=s.size();
	for(int i=0;i<len;i++)l.push(s[i]);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char a;
		cin>>a;
		if(a=='L'){
			if(!l.empty()){
				r.push(l.top());
				l.pop();
			}
		}
		if(a=='D'){
			if(!r.empty()){
				l.push(r.top());
				r.pop();
			}
		}
		if(a=='B'){
			if(!l.empty())l.pop();
		}
		if(a=='P'){
			char b;
			cin>>b;
			l.push(b);
		}
	}
	while(!l.empty()){
		r.push(l.top());
		l.pop();
	}
	while(!r.empty()){
		cout<<r.top();
		r.pop();
	}
	return 0;
	
}