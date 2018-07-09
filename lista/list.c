#include "list.h"
#include <stdlib.h>
#include <assert.h>

/* prototypes */

static void* list_new_node(void* data, list_node_constructor_fn constructor);
static void list_delete_node(list_node_t* p_node, list_node_destructor_fn destructor);


static void* list_new_node(void* data, list_node_constructor_fn constructor) {
	list_node_t* p_new_node = malloc(sizeof(list_node_t));
	p_new_node->data = constructor(data);
	p_new_node->next = NULL;
	return p_new_node;
}

static void list_delete_node(list_node_t* p_node, list_node_destructor_fn destructor) {
	destructor(p_node);
	free(p_node);
}

void list_initialize(list_t** l, list_node_constructor_fn constructor, list_node_destructor_fn destructor) {
	(*l) = malloc(sizeof(list_t));
	(*l)->head = NULL;
	(*l)->tail = NULL;
	(*l)->constructor = constructor;
	(*l)->destructor = destructor;
	(*l)->size = 0;
}

void list_delete(list_t** l) {
	while(!list_empty(*l)) 
		list_remove_head(*l);
	free(*l);
	(*l) = NULL;
}

