#include "list.h"
#include <stdlib.h>

void initialize(list_t** l, fn_list_constructor_t constructor, fn_list_destructor_t destructor) {

    (*l) = calloc(sizeof(list_t), 1);
    (*l) -> head = NULL;
    (*l) -> tail = NULL;
    (*l) -> constructor = constructor;
    (*l) -> destructor = destructor;
    (*l) -> size = 0;
}
