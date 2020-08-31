#include <iostream>
#include <cstring>
#include <algorithm>
#include<vector>
#include<stack>
using namespace std;
vector <int> v;
stack<int> s;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	
	vector<int> ans(v.size(), -1); 
 
	for (int i = 0; i < v.size(); i++) { 
		while (!s.empty() && v[s.top()] < v[i]) { 
			ans[s.top()] = v[i]; 
			s.pop(); 
		} 
		s.push(i); 
	} 
	for (int i = 0; i < n; i++) cout << ans[i] << " ";
	
	
 
	return 0;	
}