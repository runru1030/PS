#include<iostream>
#include<cstring>

using namespace std;

int n, flag=0;
string s;
int c[26]={0};
char f;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		c[s[0]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(c[i]>=5){
			f='a'+i;
			cout<<f;
			flag=1;
		}
	}
	if(flag==0)cout<<"PREDAJA";
	return 0;
}