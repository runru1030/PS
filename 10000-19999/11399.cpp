#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> atm(n);
	for(int i=0;i<n;i++){
		cin>>atm[i];
	}
	sort(atm.begin(), atm.end());
	int sum=0, res=0;
	for(int i=0;i<n;i++){
		sum+=atm[i];
		res+=sum;
	}
	cout<<res;
}
