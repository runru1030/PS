#include<iostream>
#include<algorithm>
using namespace std;
int x, y, w, h;

int main(){
	cin>>x>>y>>w>>h;
	int a=min(x, w-x);
	int b=min(y, h-y);
	cout<<min(a, b);
}

