#include<stdio.h>
#include<stdlib.h>
int n;
void num(int num) {
	int count = 0;
	int a, b, c, d;
	for (int i = 1;i <= num;i++) {
		if (i < 100) 	count++;
		if (i >= 100) {
			a = i % 100;
			b = a / 10;
			c = a % 10;
			if (b - i/100 == c - b)count++;
		}
		if (i >= 1000) {
			a = i % 1000;
			b = a / 100;
			c = a % 100/10;
			d = a % 10;
			if (b - i/1000 == c - b&&c - b==d - c)count++;
		}
		
	}
	printf("%d", count);
}
int main() {
	scanf("%d", &n);
	num(n);
}