#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> book;

int main(){
	int num, cnt=0;
	int max=-1;
	string res;
	cin>>num;
	for(int i=0;i<num;i++){
		string s;
		cin>>s;
		book.push_back(s);
			
		}
	sort(book.begin(), book.end());
	string temp=book[0];
	for(int i=0;i<num;i++){
		
		if(book[i]==temp)cnt++;
		else{
			if(max<cnt){
				max=cnt;
				res=temp;
			}
			temp=book[i];
			cnt=1;
		}
	}
	if(max<cnt){
		max=cnt;
		res=temp;
	}
	cout<<res;
	
	return 0;
}