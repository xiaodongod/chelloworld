#include <stdio.h>
#include <stdlib.h>

#include "list.h"


int main() {
    linknode *list = list_create();
    datatype arr[] = {98, 12, 23, 34, 45};

    for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++)
    {
        list_order_insert(list, &arr[i]);
    } 
    
    show(list);

    int v = 34;
    list_delete(list, &v);

    show(list);

    list_destroy(list);

    return 0;
}

