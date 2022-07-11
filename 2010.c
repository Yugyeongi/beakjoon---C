#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int many,total=0;
	int number;

	scanf_s("%d", &number);

	for (int i = 0; i < number; i++) {
		scanf("%d", &many);
		total += many;
	}

	printf("%d", total - (number - 1));

	return 0;
}