#include <stdio.h>

int main() {
    float x = 8.8, y = 3.5, z = -5.2;

    printf("(a) x+y+z       = %f\n", x + y + z);
    printf("(b) 2*y+3*(x-z) = %f\n", 2*y + 3*(x-z));
    printf("(c) x/y         = %f\n", x / y);
    printf("(e) x/(y+z)     = %f\n", x / (y + z));
    printf("(f) (x/y)+z     = %f\n", (x / y) + z);
    printf("(g) 2*x/3*y     = %f\n", 2*x / 3*y);
    printf("(h) 2*x/(3*y)   = %f\n", 2*x / (3*y));

    return 0;
}
