#include<iostream>
#include<string>
using namespace std;

string a, b;
int n, m;
int min(){
	int min=50;
	for(int i=0;i<=n;i++){
		m=0;
		for(int j=0;j<a.length();j++){
			if(a[j]!=b[j+i])m++;
		}	
		if(m<min)min=m;
	}
	return min;
	
	
	
}
int main(){
	cin>>a>>b;
	n=b.length()-a.length();
	cout<<min();
	return 0;
}