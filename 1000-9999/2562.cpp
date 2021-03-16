#include <iostream>

using namespace std;

int main(){
	int num[9]={0};
	int max=0;
	int idx=0;
	for(int i=0;i<9;i++){
		cin>>num[i];
		if(max<num[i]){
			max=num[i];
			idx=i;
		}
	}
	cout<<max<<"\n"<<idx+1;
}
