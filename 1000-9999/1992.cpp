#include <stdio.h>
char list[64][64] = {NULL};
char num[10000] = {NULL};
int sign, k=0;
int method(int a, int b,int c) {
	
	sign = -1;
	for (int i = a;i < a+c ;i++) {
		for (int j = b;j < b+c;j++) {
			if (list[a][b] != list[i][j]) {
				sign = -2;
			}
		}
	}

	if (sign == -1) {
		num[k++] = list[a][b];
	}
	if (sign == -2) {
		
			num[k++] = '(';
			method(a, b, c/2);
			method(a, b+c/ 2, c / 2);
			method(a+c / 2, b, c / 2);
			method(a+c / 2, b+c / 2, c / 2);
			num[k++] = ')';
		
	}
}
int main() {
	int n;
	scanf("%d", &n);
	char *s1 = malloc(sizeof(char) * n);
	for (int i = 0;i < n;i++) {
		scanf("%s", s1);
		for (int j = 0;j < n;j++) {
			list[i][j] = s1[j];
		
		}

	}

	method(0,0,n);
	
	
	for (int i = 0;num[i] != NULL;i++) {
		printf("%c", num[i]);
	}


	return 0;
}