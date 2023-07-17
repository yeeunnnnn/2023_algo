#include <stdio.h>

int main() {

    long long a, b;
    long long r=0;

    scanf("%lld %lld",&a, &b);
    long long c = a;
    long long d = b;
    if (b > a) {
        r = a;
        a = b;
        b = r;
    }
    while (b != 0) {
        r = a%b;
        a = b;
        b = r;
    }
    printf("%lld", (c*d)/a);
    return 0;
}