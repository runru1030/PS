#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
vector<int> v;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s=="push_back"){
			int input;
			cin>>input;
			v.push_back(input);
		}
		else if(s=="push_front"){
			int input;
			cin>>input;
			if(v.empty())v.push_back(input);
			else v.insert(v.begin(), input);
		}
		else if(s=="pop_back"){
			if(v.empty()){
				cout<<-1<<"\n";
			}
			else{
				int back=v.back();
				v.pop_back();
				cout<<back<<"\n";
			}
			
		}
		else if(s=="pop_front"){
			if(v.empty()){
				cout<<-1<<"\n";
			}
			else{
				int front=v.front();
				v.erase(v.begin()+0);
				cout<<front<<"\n";
			}
			
		}
		else if(s=="size"){
			cout<<v.size()<<"\n";
		}
		else if(s=="empty"){
			cout<<v.empty()<<"\n";
		}
		else if(s=="front"){
			if(v.empty()){
				cout<<-1<<"\n";
			}
			else cout<<v.front()<<"\n";
		}
		else if(s=="back"){
			if(v.empty())cout<<-1<<"\n";
			else cout<<v.back()<<"\n";
		}
	}
	
}

