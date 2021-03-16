#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		int num;
		char s[20]={'\0'};
		cin >>num>>s;
		for(int j=0;s[j]!=NULL;j++){
			for(int k=0;k<num;k++)cout<<s[j]<<"\n";
		}
		
	}
}
