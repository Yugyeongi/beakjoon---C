#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char word[101];
	int cnt = 0;

	scanf("%s", &word);

	for (int i = 0; i < strlen(word); i++) {
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
			cnt++;
		}
	}

	printf("%d", cnt);
}