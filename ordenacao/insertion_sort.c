#include "insertion_sort.h"


void insertion_sort(int* v, size_t size) {
	int i, j, AUX;

	for(i = 1; i < size ; i++) {
		AUX = v[i];
		for(j = i ; (j > 0) && (AUX < v[j-1]); j--){
			v[j] = v[j-1];
		}
		v[j] = AUX;
	}
}