#include<stdio.h>
int main() {
	int N[10] = {NULL};
	int n, k;
	int count = 0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n;i++) {
		scanf("%d", &N[i]);
	}
	for (int i = n-1;i >=0 ;i--) {
		if(k >= N[i]) {
			count += k / N[i];
			k = k%N[i];
				
		}
	}
	printf("%d", count);
}