#include<iostream>
#include<string.h>
using namespace std;

bool s[21]={0};
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie();
	int n;
	cin>>n;
	string a;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a=="add"){
			int input;
			cin>>input;
			s[input]=true;
			
		}
		else if(a=="remove"){
			int input;
			cin>>input;
			if(s[input]==true)s[input]=false;
		}
		else if(a=="check"){
			int input;
			cin>>input;
			s[input] ? (puts("1")) : (puts("0"));

		}
		else if(a=="toggle"){
			int input;
			cin>>input;
			s[input] ? (s[input]=false) : (s[input]=true);

		}
		else if(a=="all"){
			memset(s, true, sizeof(s));
		}
		else if(a=="empty"){
			memset(s, false, sizeof(s));
		}

	}
}
