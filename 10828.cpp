#include<iostream>
#include<cstring>

using namespace std;
int stack[10001]={0};
int f=-1;
void push(int a){
	stack[++f]=a;
}
int pop(){
	int p;
	p=stack[f--];
	return p;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char s[5]={NULL};
		cin>>s;
		
		if(!strcmp(s, "push" )){
			int a;
			cin>>a;
			push(a);
		}
		if(!strcmp(s, "pop")){
			if(f==-1)cout<<"-1"<<"\n";
			else cout<<pop()<<"\n";
		}
		if(!strcmp(s,"top")){
			if(f!=-1)cout<<stack[f]<<"\n";
			else cout<<"-1"<<"\n";
		}
		if(!strcmp(s, "size")){
			cout<<f+1<<"\n";
		}
		if(!strcmp(s,"empty")){
			if(f==-1)cout<<"1"<<"\n";
			else cout<<"0"<<"\n";
		}
		
	}
	return 0;
}