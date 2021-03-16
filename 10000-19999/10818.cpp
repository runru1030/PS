#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int num[N]={0};
	int min=1000000;
	int max=-1000000;
	for(int i=0;i<N;i++){
		cin>>num[i];
		if(num[i]>max)max=num[i];
		if(num[i]<min)min=num[i];
		
	}
	cout<<min<<" "<<max;
}
