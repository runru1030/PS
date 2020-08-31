#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	int arr[100001]={0};
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+n);
	int m;
	cin >> m;
	for(int i=0; i<m; i++){
		int num;
		scanf("%d", &num);
		printf("%d\n", binary_search(arr,arr+n,num) );
	}
	return 0;
}