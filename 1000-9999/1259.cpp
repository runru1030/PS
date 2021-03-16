#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s;
	while(1){
		cin>>s;
		if(s=="0")return 0;
		int mid;
		if(s.size()%2==0){
			
			mid=s.size()/2;
			int i;
			for(i=1;i<=mid;i++){
				if(s[mid-i]!=s[mid+i-1]){
					cout<<"no"<<"\n";
					break;
				}
			}
			if(i==mid+1)cout<<"yes"<<"\n";
		}
		else{
			mid=s.size()/2;
			int i;
			for(i=1;i<=mid;i++){
				if(s[mid-i]!=s[mid+i]){
					cout<<"no"<<"\n";
					break;
				}
			}
			if(i==mid+1)cout<<"yes"<<"\n";
		}
		
	}
}
