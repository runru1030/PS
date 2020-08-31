#include<iostream>
#include<cstring>
#include<cstdio>
#include <algorithm>

using namespace std;

	
int main(){
	string s;
	char c;
	int n[26]={0};
	int max=-1, flag=0, idx;
	
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::toupper);

	for(int i=0;i<s.length();i++){
		for(int j=i;s[i]!='0'&&j<s.length();j++){
			if(s[j]==s[i]){
				n[s[i]-'A']++;
				s[j]='0';
			}
		}
	}
	for(int i=0;i<26;i++){
		if(max==n[i])flag=-1;
		if(max<n[i]){
			max=n[i];
			flag=0;
			idx=i;
		}
			}
	if(flag==-1)cout<<"?";
	else {
		c='A'+idx;
		cout<<c;
	}
	
	return 0;
}