#include <stdio.h>
#include <stdlib.h>


int main()
{

    int a[2][3] = {1,2,3,4,5,6};
    int i,j;
    printf("%p %p\n", a, a+1);

    int *p;
    p=&a[0][0];
    for ( i = 0; i < 6; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");



    for (i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%p -> %d ", &a[i][j], a[i][j]);
            printf("%p -> %d\n", *(a+i)+j, *(*(a+i)+j));
        }
        printf("\n");
    }
    

    exit(0);
}