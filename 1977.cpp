#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[101];

void main(){

    int one, two, frist;
    int total = 0, cnt = 0;

    for (int i = 1; i <= 100; i++) {
        arr[i - 1] = i * i;
    }

    scanf("%d %d", &one, &two);

    for (int i = 1; i <= 100; i++) {
        if (one <= arr[i-1] && arr[i-1] <= two) {
            cnt++;
            if (cnt == 1) {
                frist = arr[i-1];
            }
            total += arr[i-1];
        }
    }

    if (cnt == 0) {
        printf("-1\n");
    }
    else {
        printf("%d\n", total);
        printf("%d", frist);
    }

    return 0;
}
