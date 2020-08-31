#include<stdio.h>
int main() {
	int n,a ,b;
	char c[12] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G','H', 'I', 'J', 'K', 'L' };
	scanf("%d", &n);
	a = (10+(n-4)) % 10;
	b = (12 + (n - 4)) % 12;
	printf("%c%d", c[b], a);
}