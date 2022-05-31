#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int test, total = 0, number, getnum;

	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d", &number);

		for (int j = 0; j < number; j++) {
			scanf("%d", &getnum);
			total += getnum;
		}
		printf("%d\n", total);
		total = 0;
	}
}