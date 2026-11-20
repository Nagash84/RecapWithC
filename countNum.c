#include <stdio.h>
int main (void) {
    int x, *p = &x; //as long as x is declared first!
    x= 10;
    printf("%d \n",*p);
    int k= *&x;
    printf("%d \n",k);

    int i, j, *m, *q;
    m = &i;
    q = &j;
    j = 12;
    i =24;
    *q = *m;
    printf("%d %d  %d \n",*m, *q,j);
    return 0;
}