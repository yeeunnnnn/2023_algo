#include <stdio.h>

int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    int d = a + b + c;

    if (d == 180) {

        if (a == 60 && a == b && b == c)
            printf("Equilateral");
        else if (a == b || b == c || c == a)
            printf("Isosceles");
        else
            printf("Scalene");
    }
    else
        printf("Error");
    return 0;
}