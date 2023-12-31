#include <stdio.h>
#include <stdlib.h>

int N, M, x;
int card[500001];

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int upper_bound(int* arr, int size, int target) {
    int left = 0;
    int right = size;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target)
            left = mid + 1;
        else
            right = mid;
    }

    return left;
}

int lower_bound(int* arr, int size, int target) {
    int left = 0;
    int right = size;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }

    return left;
}

int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &card[i]);
    }

    qsort(card, N, sizeof(int), compare);

    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        scanf("%d", &x);
        printf("%d ", upper_bound(card, N, x) - lower_bound(card, N, x));
    }

    return 0; 
}