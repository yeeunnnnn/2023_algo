#include <stdio.h>

// 상근이 가지고 있는 숫자를 1로 표기
// -10000000이 시작점이다 
int sang_gen_have[10000000 * 2 + 1] = { 0 };
int N, M;

int main() {
    scanf("%d", &N);
    int sub;
    // 배열에 존재하는 숫자는 1로 표기 
    for (int i = 0; i < N; i++) {
        scanf("%d", &sub);
        sang_gen_have[sub + 10000000] = 1;
    }

    // 배열에 존재하는 숫자면 1 출력, 아니면 0 출력 
    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        scanf("%d", &sub);
        if (sang_gen_have[sub + 10000000])
            printf("%d ", 1);
        else
            printf("%d ", 0);
    }
 
    return 0;
}