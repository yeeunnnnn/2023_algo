#include <stdio.h>
#include <stdlib.h>

// 내림차순 정렬
int compare_desc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N;
    scanf("%d", &N);

    int* numbers = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    qsort(numbers, N, sizeof(int), compare_desc);

    for (int i = 0; i < N; i++) {
        printf("%d ", numbers[i]);
    }

    free(numbers);

    return 0; 
}