#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char word[101];
	gets(word);

	for (int i = 0; i < strlen(word); i++) {
		if (65 <= word[i] && word[i] <= 90) {
			word[i] = word[i] + 13;
			if (word[i] > 90) {
				word[i] = word[i] - 26;
			}
		}
		else if(97<= word[i] && word[i]<= 122) {
			if (97 <= word[i] && word[i] <= 109) {
				word[i] = word[i] + 13;
			}
			else {
				word[i] = word[i] - 13;
			}
		}
	}

	printf("%s", word);

}