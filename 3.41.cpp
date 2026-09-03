#include <stdio.h>

int main() {
    int i, j, k;
    float x, y, z;
    char a, b, c, d;

#define RESET() (i=8, j=5, x=0.005, y=-0.01, c='c', d='d')

    RESET(); k = (i + j);             printf("(a) k=(i+j)         -> k=%d\n", k);
    RESET(); z = (x + y);             printf("(b) z=(x+y)         -> z=%f\n", z);
    RESET(); i = j;                   printf("(c) i=j             -> i=%d\n", i);
    RESET(); k = (x + y);             printf("(d) k=(x+y)         -> k=%d\n", k);
    RESET(); k = c;                   printf("(e) k=c             -> k=%d\n", k);
    RESET(); z = (float)(i / j);      printf("(f) z=i/j           -> z=%f\n", z);
    RESET(); a = b = d;               printf("(g) a=b=d           -> a=%c b=%c\n", a, b);
    RESET(); i = (j = 1.1);           printf("(h) i=j=1.1         -> i=%d j=%d\n", i, j);
    RESET(); z = (k = x);             printf("(i) z=k=x           -> k=%d z=%f\n", k, z);
    RESET(); k = (z = x);             printf("(j) k=z=x           -> z=%f k=%d\n", z, k);
    RESET(); i += 2;                  printf("(k) i+=2            -> i=%d\n", i);
    RESET(); y -= x;                  printf("(l) y-=x            -> y=%f\n", y);
    RESET(); x *= 2;                  printf("(m) x*=2            -> x=%f\n", x);
    RESET(); i /= j;                  printf("(n) i/=j            -> i=%d\n", i);
    RESET(); i %= j;                  printf("(o) i%%=j            -> i=%d\n", i);
    RESET(); i += (j - 2);            printf("(p) i+=(j-2)        -> i=%d\n", i);
    RESET(); k = (j == 5) ? i : j;    printf("(q) k=(j==5)?i:j    -> k=%d\n", k);
    RESET(); k = (j > 5) ? i : j;     printf("(r) k=(j>5)?i:j     -> k=%d\n", k);
    RESET(); z = (x >= 0) ? x : 0;    printf("(s) z=(x>=0)?x:0    -> z=%f\n", z);
    RESET(); z = (y >= 0) ? y : 0;    printf("(t) z=(y>=0)?y:0    -> z=%f\n", z);
    RESET(); a = (c < d) ? c : d;     printf("(u) a=(c<d)?c:d     -> a=%c\n", a);
    RESET(); i -= (j > 0) ? j : 0;    printf("(v) i-=(j>0)?j:0    -> i=%d\n", i);

    return 0;
}
