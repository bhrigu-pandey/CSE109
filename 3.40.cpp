#include <stdio.h>

int main() {
    int i = 8, j = 5;
    float x = 0.005, y = -0.01;
    char c = 'c', d = 'd';

    printf("(a) (3*i-2*j)%%(2*d-c) = %d\n", (3*i - 2*j) % (2*d - c));
    printf("(b) 2*((i/5)+(4*(j-3))%%(i+j-2)) = %d\n",
           2 * ((i/5) + (4*(j-3)) % (i+j-2)));

    return 0;
}
