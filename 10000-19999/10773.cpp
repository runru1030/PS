#include<stdio.h>
int stack[100000] = { NULL };
int top = -1;

int main() {
	int n;
	int a;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &a);
		if (a == 0) {
			sum -= stack[top];
			stack[top--];
	
		}
		else{
			stack[++top] = a;
			sum += a;
		}
	}

	printf("%d", sum);
}