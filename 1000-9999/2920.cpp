#include <iostream>

using namespace std;

int main(){
	string s[3]={"ascending", "descending", "mixed"};
	int a, b;
	int i;
	for(i=1;i<9;i++){
		cin>>a;
		if(a==b-1||a==b+1||i==1){
			b=a;
		}
		else{
			cout<<s[2];
			return 0;
		};
	}
	if(a==1)cout<<s[1];
	else cout<<s[0];	
}
