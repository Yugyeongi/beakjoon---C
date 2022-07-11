#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
	int test, gub;
	int odd, even;

	scanf_s("%d", &test);

	for (int i = 0; i < test; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < test; j++) {
				printf("* ");
			}
		}
		else {
			for (int j = 0; j < test; j++) {
				printf(" *");
			}
		}
		printf("\n");
	}

	return 0;

}