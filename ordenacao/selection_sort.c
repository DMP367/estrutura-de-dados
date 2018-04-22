#include "selection_sort.h"


void selection_sort(int* v, size_t size) {
	int i, j, menor, swp;

	for(i = 0; i < size - 1; i++){
		menor = i;
		for(j = i + 1; j < size; j++)
			if (v[j] < v[menor])
				menor = j;

		if (i != menor){
			swp = v[i];
			v[i] = v[menor];
			v[menor] = swp;
		}
	}

}