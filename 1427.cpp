#include<stdio.h>
#include <string.h> 
char num[10] = { NULL };

int main() {
	int max = 0;
	scanf("%s", num);

	for (int i = 0;i < strlen(num);i++) {
		for (int j = i+1;j < strlen(num);j++) {
			if (num[i] < num[j]) {
				char c = num[j];
				num[j] = num[i];
				num[i] = c;
			}
		}
	}
	for (int i = 0;num[i] != NULL;i++) {
		printf("%c", num[i]);
	}
}