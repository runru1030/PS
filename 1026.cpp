#include<iostream>
#include<algorithm>
using namespace std;
int n, sum=0;
int A[50]={NULL};
int B[50]={NULL};
int visit[50]={0};
int max(){
	int max=0, index;
	for(int i=0;i<n;i++){
		if(B[i]>=max&&!visit[i]){
			max=B[i];
			index=i;
		}
	}
	visit[index]=1;
	return max;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)	cin>>A[i];
	for(int i=0;i<n;i++)	cin>>B[i];
	sort(A, A+n);
	for(int i=0;i<n;i++){
		sum+=A[i]*max();
	}
	cout<<sum;
	return 0;
}