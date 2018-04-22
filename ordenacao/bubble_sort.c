#include "bubble_sort.h"

void bubble_sort(int* v, size_t size){
	int i, swaped = 1;
		
	for(i = 0; i < size && swaped ; i++ ){
		int j;
		swaped = 0;
		for(j = 0; j < size - i ; j++ ){
			if (v[j] > v[j+1]){
				swap(v[j], v[j+1]);
				swaped = 1;
			}
		}
	}
}