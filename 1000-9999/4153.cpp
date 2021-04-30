#include<iostream>
#include<algorithm>
using namespace std;
int tri[3];
int main(){
	while(1){
		cin>>tri[0]>>tri[1]>>tri[2];
		if(tri[0]==0&&tri[1]==0&&tri[2]==0)return 0;
		sort(tri, tri+3);
		if(tri[0]*tri[0]+tri[1]*tri[1]==tri[2]*tri[2])cout<<"right\n";
		else cout<<"wrong\n";

	}
}
