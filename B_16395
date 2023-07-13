#include <stdio.h>

int main() {
    int n, k, sum;

    scanf("%d %d", &n, &k);


    if (n <= 30 && k <= n) {
        sum = pascal_square(n, k);
        printf("%d", sum);
    }
    return 0;
}
int pascal_square(int n, int k) {
    if (n == 1) return 1;
    else if (n == k) return 1;
    else if (k == 1) return 1;
    else if (k > 1 && n > 1)
        return pascal_square(n - 1, k) + pascal_square(n - 1, k - 1);
}