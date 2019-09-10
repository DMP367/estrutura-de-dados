#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdlib.h>

typedef void* (*fn_list_constructor_t)(void*);
typedef void (*fn_list_destructor_t )(void*);

typedef struct list_node_t {
    void* data;
    struct list_node_t* next;
}list_node_t;

typedef struct list_t {
    list_node_t* head;
    list_node_t* tail;
    fn_list_constructor_t constructor;
    fn_list_destructor_t destructor; 
    size_t size;
}list_t;


void list_initialize(list_t** l, fn_list_constructor_t constructor, fn_list_destructor_t destructor);
void list_access_position(list_t* l, int position, void* value_returned);
void list_access_head(list_t* l, void* value_returned);
void list_access_tail(list_t* l, void* value_returned);
void list_remove_element(list_t* l, int position);
void list_remove_tail(list_t* l);
void list_remove_head(list_t* l);
int list_empty(list_t *l);
void list_delete(list_t** l);


#endif
