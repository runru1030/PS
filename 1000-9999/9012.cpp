#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		int a=0, b=0;
		cin>>s;
		for(int j=0;s[j];j++){
			if(s[j]=='(')a++;
			else if(s[j]==')'){
				a--;
				if(a<0)break;
			}
		}
		if(a==0)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
