#include <stdio.h>
#include <stdlib.h>


#define PI 3.14

#define ADD 2+3
// #define Max(a,b) (a>b?a:b)


#define Max(a,b) ({int A=a,  B=b; ((A) > (B) ? (A) : (B));})

int main()
{
    int a,b,c;

    a*PI;

    a+PI;
    
    c/PI;

    // actual 2+3*2+3 = 11
    printf("%d\n", ADD * ADD);

    int i=5, j=3;
    printf("%d\n", Max(i,j));

    exit(0);
}

#if 0
/**
 * gcc -E defined.c
 * 
 * int main()
    {
        int a,b,c;

        a*3.14;

        a+3.14;

        c/3.14;

        exit(0);
    }
 * 
*/
#endif