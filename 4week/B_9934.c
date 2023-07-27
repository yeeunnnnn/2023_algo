#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int tree[1030];
int answer[12][3000] = { 0 };
int ind = 0;

void find(int start, int last, int h) {
    int mid;

    if (start == last)
        return;

    mid = (start + last) / 2;

    answer[h][ind++] = tree[mid];

    find(start, mid, h + 1);
    find(mid + 1, last, h + 1);
}

int main() {
    int k, k2 = 1;
    int i, j, h = 1, cnt = 0;

    scanf("%d", &k);

    k2 = pow(2, k) - 1;

    for (i = 0; i < k2; i++)
        scanf("%d", &tree[i]);

    find(0, k2, 0);

    for (i = 0; i < k; i++) {
        for (j = 0; j < 3000; j++) {
            if (answer[i][j] != 0)
                printf("%d ", answer[i][j]);
        }
        printf("\n");
    }

    return 0;
}
