#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
	vector<int>a(3);
	cin>>a[0];
	cin>>a[1];
	cin>>a[2];
	sort(a.begin(), a.end());
	cout<<a[1];
	return 0;
}