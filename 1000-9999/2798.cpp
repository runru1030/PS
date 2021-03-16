#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m;
int mx=-1;
vector <int> card;
bool compare(int i, int j){
	return j<i;
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int input;
		cin>>input;
		card.push_back(input);
	}
	sort(card.begin(), card.end(), compare);
	for(int i=0;i<n;i++){
		int res=card[i];
		for(int j=i+1;j<n;j++){
			res+=card[j];
			for(int k=j+1;k<n;k++){
				res+=card[k];
				if(res<=m){
					mx=max(mx, res);
				}
				res-=card[k];
			}
			res-=card[j];
		}
	}
	cout<<mx;
}

