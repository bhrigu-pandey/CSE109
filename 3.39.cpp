#include <stdio.h>

int main() {
    int i = 1, j = 1;
    long ix = 1;
    short s = 1;
    float x = 1.0;
    double dx = 1.0;
    char c = 'a';

    printf("(a) i+c   size = %zu (int)\n",    sizeof(i + c));
    printf("(b) x+c   size = %zu (float)\n",  sizeof(x + c));
    printf("(c) dx+x  size = %zu (double)\n", sizeof(dx + x));
    printf("(d) ((int)dx)+ix size = %zu (long)\n", sizeof(((int)dx) + ix));
    printf("(e) i+x   size = %zu (float)\n",  sizeof(i + x));
    printf("(f) s+j   size = %zu (int)\n",    sizeof(s + j));
    printf("(g) ix+j  size = %zu (long)\n",   sizeof(ix + j));
    printf("(h) s+c   size = %zu (int)\n",    sizeof(s + c));
    printf("(i) ix+c  size = %zu (long)\n",   sizeof(ix + c));

    return 0;
}
