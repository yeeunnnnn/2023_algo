#include <stdio.h>
#include <stdlib.h>

typedef long long LL;

int main(void) {
    LL N, M, answer = 0;
    scanf("%lld %lld", &N, &M);

    LL* A = (LL*)malloc(sizeof(LL) * (N + 1));
    for (LL n_idx = 1; n_idx <= N; n_idx++)
        scanf("%lld", &A[n_idx]);

    // left와 right 를 이동시키면서 합과 같은 녀석이 나오면 답++
    LL left = 1, right = 1, sum = 0;
    while (left <= right && right <= N + 1) {
        if (sum >= M) {
            if (sum == M) answer++;
            sum -= A[left++];
        }
        else {
            if (right == N + 1) break;
            sum += A[right++];
        }
    }
    printf("%lld", answer);

    free(A);
    return 0; 
}