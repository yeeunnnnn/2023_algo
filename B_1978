#include <stdio.h>

int main() {

    int N, A;
    int count = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) { //N개의 숫자 만큼 반복
     scanf("%d", &A);
        for (int j = 2; j <= A; j++) { //2부터 A까지 다 나누기
            if (A == j)
                count++;
            if (A % j == 0)
                break;
        }
        

    }
    printf("%d",count);
    return 0;

}