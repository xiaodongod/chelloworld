#include <stdio.h>
#include <stdlib.h>

#define NAMESIZE 32

struct score_st
{
    int id;
    char name[NAMESIZE];
    int math;
    int chinese;
};

struct node_st {
    struct score_st data;
    struct node_st *next;
};

struct node_st* list_insert(struct node_st* list, struct score_st *data) {
    struct node_st *node =  malloc(sizeof(*node));
    node->data = *data;
    node->next = list;
    list = node;
    return list;
}

void list_show(struct node_st* list) {
    struct node_st *node_st = list;
    while (node_st != NULL)
    {
        printf("%d %s %d %d\n", node_st->data.id, node_st->data.name, 
                                node_st->data.math, node_st->data.chinese);
        node_st = node_st->next;
    }
}

/*
list_delete();

list_find();
*/

int main() {

    struct node_st *list = NULL;
    struct score_st tmp;

    for (int i = 0; i < 5; i++)
    {
        tmp.id = i;
        snprintf(tmp.name, NAMESIZE, "stu%d", i);
        tmp.math = rand() % 100;
        tmp.chinese = rand() % 100; 
        list = list_insert(list, &tmp);
    }
    

    list_show(list);

    exit(0);
}