#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main(){
	char c[1000001];
	int count=0;
	cin.getline(c, 1000000);
	char *w=strtok(c," ");
	while(w!=NULL){
		count++;
		w=strtok(NULL," ");
	}
	cout<<count;
	return 0;
}