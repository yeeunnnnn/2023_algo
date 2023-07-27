#include <stdio.h>

    int main() {
    int n, i, fibo = 0, fibo1 = 1, fibo2 = 1;

    scanf("%d", &n);
    
        for (i = 2; i <= n; i++) {
            fibo2 = fibo + fibo1;
            fibo = fibo1;
            fibo1 = fibo2;
        }
        printf("%d", fibo2);
    return 0;
}