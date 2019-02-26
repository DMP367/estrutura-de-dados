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


void initialize(list_t** l, fn_list_constructor_t constructor, fn_list_destructor_t destructor);


void delete(list_t** l);


#endif
