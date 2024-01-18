#include <stdio.h>

int main() {
    const int N = 9;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <=i; j++)
        {
           // printf("%d*%d=%-4d",j,i,i*j);
            printf("%d*%d=%d\t",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}