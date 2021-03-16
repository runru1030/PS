#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	int n, m;
	cin>>n;
	vector<int> card(n);
	for(int i=0;i<n;i++)	scanf("%d", &card[i]);
	
	sort(card.begin(), card.end());
	cin>>m;
	for(int i=0;i<m;i++){
		int input;
		scanf("%d", &input);
		printf("%d ", upper_bound(card.begin(), card.end(), input)-lower_bound(card.begin(), card.end(), input));
	}
}
