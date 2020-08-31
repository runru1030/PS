#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;
char num[5]={NULL};
int main(){
	string s;
	int flag=0;
	int j=-1;
	int res=0;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]<='9'&&s[i]>='0')num[++j]=s[i];
		if(s[i]=='-'){
			if(flag==0)res+=atoi(num);
			if(flag==-1)res-=atoi(num);
			flag=-1;
			memset(num, NULL, sizeof(num));
			j=-1;
		}
		if(s[i]=='+'){
			if(flag==0)res+=atoi(num);
			if(flag==-1)res-=atoi(num);
			memset(num, NULL, sizeof(num));
			j=-1;
		}
	}
	if(flag==-1)res-=atoi(num);
	if(flag==0)res+=atoi(num);
	cout<<res;
	return 0;
}