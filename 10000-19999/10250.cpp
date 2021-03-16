#include <iostream>

using namespace std;
int t, w, h, n;
int main(){
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>h>>w>>n;
		int y=n%h;
		if(y==0)y=h;
		int x=(n-1)/h+1;
		cout<<y*100+x<<"\n";
	}
}
