#include <stdio.h>
#include <stdlib.h>

#include "list.h"


int main() {
    linknode *list = list_create();
    datatype arr[] = {12, 23, 34, 45};

    for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++)
    {
        list_insert_at(list, 0, &arr[i]);
    }
    
    show(list);

    list_destroy(list);

    return 0;
}

