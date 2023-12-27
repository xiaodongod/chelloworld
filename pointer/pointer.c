#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int* p = &i;
    int** q = &p;
    int*** r = &q;
    float* f;
    double* d;
    char* c;

    c = &i;
    printf("*c = %d\n", *c);

    printf("%d\n", sizeof(i));
    printf("%d\n", sizeof(p));
    printf("%d\n", sizeof(q));

    printf("%d\n", sizeof(f));

    printf("%d\n", sizeof(d));
    printf("%d\n", sizeof(c));


    printf("i=%d\n", i);

    printf("&i=%p\n", &i);


    printf("p=%p\n", p);
    printf("&p=%d\n", &p);

    printf("*p=%d\n", *p);

    printf("q=%p\n", q);

    printf("*q=%p\n", *q);

    printf("**q=%d\n", **q);

    printf("***r=%d\n", ***r);
    exit(0);
}