#include <stdio.h>

int main() {
    char c1 = 'E', c2 = '5', c3 = '?';

    printf("(a) c1          = %d\n", c1);
    printf("(b) c1-c2+c3    = %d\n", c1 - c2 + c3);
    printf("(c) c2-2        = %d\n", c2 - 2);
    printf("(d) c2-'2'      = %d\n", c2 - '2');
    printf("(e) c3+'#'      = %d\n", c3 + '#');
    printf("(f) c1%%c3       = %d\n", c1 % c3);
    printf("(g) '2'+'2'     = %d\n", '2' + '2');
    printf("(h) (c1/c2)*c3  = %d\n", (c1 / c2) * c3);
    printf("(i) 3*c2        = %d\n", 3 * c2);
    printf("(j) '3'*c2      = %d\n", '3' * c2);

    return 0;
}
