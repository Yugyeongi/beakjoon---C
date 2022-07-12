#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	int a[50], b[50];
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < num; i++) {
		scanf("%d", &b[i]);
	}
	
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (b[i] < b[j]) {
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}

	int ans = 0;
	for (int i = 0; i < num; i++) {
		ans += a[i] * b[i];
	}

	printf("%d", ans);
}