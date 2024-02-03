#include <stdio.h>
#include "sqlist.h"
#include <stdlib.h>

int main() {

    sqlist *list = sqlist_create();

    datatype arr[] = {12,23,34,45,56};
    datatype arr1[] = {21,66,50,45,89};

    if (list == NULL)
    {
        fprintf(stderr, "sqlist_create() failed!\n");
        exit(0);
    }
    
    sqlist *list1 = sqlist_create();
    if (list == NULL)
    {
        fprintf(stderr, "sqlist_create() failed!\n");
        exit(0);
    }




    int err;
    for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++)
    {
        if( ( err =sqlist_insert(list,0, &arr[i]))  != 0) {
            if (err == -1)
            {
                fprintf(stderr, "arr is full \n");
            } else if (err == -2) {
                fprintf(stderr, "insert position is invaild \n");
            } else {
                fprintf(stderr, "Error!");
            }
        }
    }

    for (int i = 0; i < sizeof(arr1)/sizeof(*arr1); i++)
    {
        if( ( err =sqlist_insert(list1,0, &arr1[i]))  != 0) {
            if (err == -1)
            {
                fprintf(stderr, "arr is full \n");
            } else if (err == -2) {
                fprintf(stderr, "insert position is invaild \n");
            } else {
                fprintf(stderr, "Error!");
            }
        }
    }
    
    sqlist_show(list);
    

    sqlist_show(list1);

    sqlist_union(list, list1);
    sqlist_show(list);

#if 0
    sqlist_show(list);

    sqlist_delete(list, 1);

    sqlist_show(list);

    sqlist_destroy(list);
#endif

    sqlist_destroy(list);
    sqlist_destroy(list1);
    exit(0);

}