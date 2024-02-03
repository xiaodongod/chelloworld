#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"


sqlist *sqlist_create() {
    sqlist *this;
    this = malloc(sizeof(*this));
    if (this == NULL)
    {       
        //todo error
        return NULL;
    }
    this->last = -1;
    return this;
}

void sqlist_create1(sqlist **ptr)
{
    malloc(sizeof(**ptr));
    if (*ptr == NULL)
    {
        return;
    }

    (*ptr)->last = -1;
    return;
}

int sqlist_insert(sqlist *this, int i, datatype *data) {
    if (this->last == DATASIZE - 1)
    {
        return -1;
    }
    if (i <0 || i > this->last + 1)
    {   
        return -2;
    }
    

    for (int j = this->last; j>=i; j--)
    {
        this->data[j+1] = this->data[j];
    }
    this->data[i] = *data;
    this->last++;

    return 0;
    
}


void sqlist_show(sqlist *this) {
    if (this->last == -1)
    {
        return;
    }
    for (int i = 0; i <= this->last; i++)
    {
        printf("%d ", this->data[i]);
    }
    printf("\n");
    return;
}

int sqlist_delete(sqlist *this, int i){
    if (i<0 || i>this->last)
    {
        return -1;
    }
    for (int j = i; j < this->last; j++)
    {
        this->data[j]=this->data[j+1];
    }
    this->last--;
    
    return 0;
}

int sqlist_find(sqlist *this, datatype *data){

    if (sqlist_isempty(this) == 1)
    {
        return -1;
    }
    

    for (int i = 0; i < this->last; i++)
    {
        if (this->data[i] == *data)
        {
            return i;
        }
        
    }
    return -1;
}

int sqlist_isempty(sqlist *this){
    if (this->last==-1)
    {
        return 1;
    }
    return 0;
}

int sqlist_setempty(sqlist *this){
    this->last=-1;
    return 0;
}

int sqlist_size(sqlist *this){
    return this->last+1;
}

int sqlist_union(sqlist* list1, sqlist *list2){
    for (int i = 0; i <= list2->last; i++)
    {
        if (sqlist_find(list1, &list2->data[i]) < 0 )
        {
            sqlist_insert(list1, 0, &list2->data[i] );
        }
        
    }
    
    return 0;
}

int sqlist_destroy(sqlist* this ){
    free(this);
    return 0;
}
