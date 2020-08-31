#include<iostream>

using namespace std;

int main(){
	int n, cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int flag=-1, num=0;
		char c[100]={NULL};
		string s;
		
		cin>>s;
		
		c[0]=s[0];
		for(int j=1;j<=s.length();j++)
			if(s[j]!=s[j-1])c[++num]=s[j];

		
		for(int j=0;j<num-1;j++){
			for(int k=j+1;k<num;k++){
				if(c[j]==c[k]){
					flag=1;
					break;
					}
			}
			if(flag==1)break;
		}
		if(flag==-1)cnt++;
		
		
	}
	cout<<cnt;
	return 0;
}