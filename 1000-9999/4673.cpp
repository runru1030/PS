#include<stdio.h>
void self() {
	int a, sum,i, b;
	int n[10000] = { 0 };
	int A[10000] = { 0 };
	for (i = 0;i < 10000;i++) {
		A[i] = i+1;
	}
	for (int j = 1;j <= 10000;j++) {
		for (a = j,sum=j;a>0;) {
			b = a % 10;
			a /= 10;
			sum += b;
		}
		n[j-1] = sum;
	}
	for (int j = 0;j < 10000;j++) {
		for (i = 0;i < 10000;i++) {
			if (n[j] == A[i])A[i] = 0;

		}
	}
	for (i = 0;i < 10000;i++) {
		if (A[i] != 0)printf("%d\n", A[i]);
	}
}
int main() {
	
	self();

}