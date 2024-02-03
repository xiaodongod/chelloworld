#include <stdio.h>
#include <stdlib.h>


#include "list.h"



linknode *list_create() {
    linknode* list = malloc(sizeof(*list));
    list->next = NULL;
    return list;
}

int list_insert_at(linknode* list, int i, datatype *data) {
    if (i < 0)
    {
        return -1;
    }

    linknode *node = list;
    int j=i;
    while (j < i && node != NULL)
    {
        node = node->next;
        j++;
    }

    if (node)
    {
        linknode* newnode = malloc(sizeof(*newnode));
        newnode->data = *data;
        linknode* next = node->next;
        node->next = newnode;
        newnode->next = next;
        return 0;
    } else {
        return -1;
    }
}

void show(linknode *list) {
    linknode *node = list;
    while (node->next != NULL)
    {
        printf("%d ", node->next->data);
        node = node->next;
    }
    printf("\n");
}

int list_order_insert(linknode *list, datatype *data) {
    linknode *node = list;

    while (node->next != NULL && node->next->data < *data)
    {
        node = node->next;
    }

    linknode *newnode = malloc(sizeof(newnode));
    newnode->data=*data;
    linknode *next = node->next;
    node->next = newnode;
    newnode->next=next;
    
    return 0;
}

int append(linknode* list, datatype *data ){
    return 0;
}

int delete_at(linknode *list, int i, datatype *data){
    return 0;
}

int list_delete(linknode *list, datatype *data){
    linknode* node = list;
    while (node->next != NULL && node->next->data != *data)
    {
        node=node->next;
    }
    if (node)
    {
        linknode* nextnext = node->next->next;
        free(node->next);
        node->next=NULL;
        node->next = nextnext;
    }
    return 0;
}

int isempty(linknode* list) {
    return list->next == NULL?1:0;
}

void list_destroy(linknode *list) {
    linknode *node, *next;
    
    for (node = list->next; node != NULL; node = next)
    {
        next = node->next;
        free(node);
    }
    free(list);
}
