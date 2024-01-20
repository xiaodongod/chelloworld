#include <stdio.h>
#include <stdlib.h>


int main() {
    int a[] = {2,5,12,54,61,62,99};
    int b[] = {3,5,20,33,71,87};


    int lena = sizeof(a)/sizeof(a[0]);
    int lenb = sizeof(b)/sizeof(b[0]);


    for (int i = 0, j=0; i < lena || j < lenb; )
    {
        if (a[i] < b[j] && i<lena)
        {
            printf("%d ", a[i++]);
        } else {
            printf("%d ", b[j++]);
        }
    }
    printf("\n");
    


    exit(0);
    
}

