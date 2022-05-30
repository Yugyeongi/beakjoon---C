#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int test, player_p, biggest = 0;
	int player_price[101];
	char player_name[101][21];

	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d", &player_p);

		for (int j = 0; j < player_p; j++) {
			scanf("%d %s", &player_price[j], &player_name[j]);
			if (player_price[j] >= biggest) {
				biggest = player_price[j];
			}
		}

		for (int k = 0; k < player_p; k++) {
			if (biggest == player_price[k]) {
				printf("%s\n", player_name[k]);
			}
		}

		biggest = 0;

	}
	return 0;
}