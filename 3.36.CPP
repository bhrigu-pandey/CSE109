#include <stdio.h>

int main() {
    int a = 8, b = 3, c = -5;

    printf("(a) a+b+c       = %d\n", a + b + c);
    printf("(b) 2*b+3*(a-c) = %d\n", 2*b + 3*(a-c));
    printf("(c) a/b         = %d\n", a / b);
    printf("(d) a%%b         = %d\n", a % b);
    printf("(e) a/c         = %d\n", a / c);
    printf("(f) a%%c         = %d\n", a % c);
    printf("(g) a*b/c       = %d\n", a * b / c);
    printf("(h) a*(b/c)     = %d\n", a * (b / c));
    printf("(i) (a*c)%%b     = %d\n", (a*c) % b);
    printf("(j) a*(c%%b)     = %d\n", a * (c % b));

    return 0;
}
