#ifndef LIST_H__
#define LIST_H__

typedef int datatype;

typedef struct node
{
    datatype data;
    struct node *next;
} linknode;


linknode *list_create();

int list_insert_at(linknode*, int i, datatype *);

int append(linknode*, datatype*);

int delete_at(linknode *, int i, datatype *);

int list_delete(linknode *, datatype *);

int isempty(linknode*);

void list_destroy(linknode *);

void show(linknode *);

int list_order_insert(linknode *, datatype *) ;


#endif 





