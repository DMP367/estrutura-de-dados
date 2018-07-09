#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdlib.h>

typedef void* (*list_node_constructor_fn)(void*);
typedef void (*list_node_destructor_fn)(void*);


typdedf struct list_node_t{
	void* data;
	struct list_node_t* next;
}list_node_t;


typedef list_node_t* list_iterator_t;

typedef struct list_t {
	list_node_t* head;
	list_node_t* tail;
	list_node_constructor_fn constructor;
	list_note_destructor_fn destructor;
	size_t size;
};

/* prototypes */

void list_initialize(list_t** l, list_node_constructor_fn constructor, list_node_destructor_fn destructor);
void list_delete(list_t** l);
void list_insert(list_t* l, void* data, size_t i);
void list_prepend(list_t* l, void* data);
void list_append(list_t* l, void* data);
void list_remove(list_t* l, size_t i);
void list_remove_head(list_t* l);
void list_remove_tail(list_t* l);
void* list_access(list_t* l, size_t i);
void* list_access_head(list_t* l);
void* list_access_tail(list_t* l);
void list_size(list_t* l);
void list_empty(list_t* l);

#endif  /* _LIST_H_ */
