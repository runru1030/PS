#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string s;
	int cnt=0, i=0, j=0, pos=0;
	getline(cin, s);
	string str;
	getline(cin, str);
	while(i<s.size()){
		if(s[i++]!=str[j++]){
			j=0;
			pos++;
			i=pos;
		}
		else if(j==str.size()){
			cnt++;
			j=0;
			pos=i;
		}
	}
	cout<<cnt;

	return 0;
}