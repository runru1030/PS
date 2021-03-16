#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>

using namespace std;
vector < pair<int, string> > v;
bool compare(pair<int, string>a, pair<int, string>b){
	
		return a.first<b.first;
	
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int age;
		string name;
		cin>>age>>name;
		v.push_back(make_pair(age, name));
	}
	stable_sort(v.begin(), v.end(), compare);
	for(int i=0;i<n;i++){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
}
