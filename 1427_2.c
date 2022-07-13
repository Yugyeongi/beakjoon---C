#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	char n[11];
	int a, b;
	scanf("%s", &n);

	for (int i = 0; i < strlen(n); i++) {
		for (int j = 0; j < strlen(n); j++) {
			a = n[i] - 48;
			b = n[j] - 48;
			if (a > b) {
				char temp = n[j];
				n[j] = n[i];
				n[i] = temp;
			}
		}
	}

	printf("%s", n);
}