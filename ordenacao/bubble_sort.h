#ifndef BUBBLE_SORT_H_INCLUDED
#define BUBBLE_SORT_H_INCLUDED
#include <stdlib.h>

#define swap(v1, v2) { v1^=v2; v2^=v1; v1^=v2; }

void bubble_sort(int* vector, size_t size);

#endif  /* BUBBLE_SORT_H */