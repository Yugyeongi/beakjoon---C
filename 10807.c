#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int test, cnt = 0;
	int a[101];
	int push;

	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &push);

	for (int i = 0; i < test; i++) {
		if (a[i] == push) cnt++;
	}

	printf("%d", cnt);
}