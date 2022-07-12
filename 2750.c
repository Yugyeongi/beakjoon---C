#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	int a[1001];

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (a[i] < a[j]) {
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	for (int i = 0; i < num; i++) {
		printf("%d\n", a[i]);
	}

}