#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector <int> v;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int input;
		cin>>input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	for(int i=0;i<n;i++){
		cout<<v[i]<<"\n";
	}
}
