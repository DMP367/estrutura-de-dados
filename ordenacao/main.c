#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "quick_sort.h"

int* set_vet_values(size_t size){
	int* v = malloc(sizeof(int) * size);
	int i;
	for(i = 0; i < size; i++){
		v[i] = rand()%1000;
	}
	return v;
}

void print_vet(int* v, size_t size){
	int i;
	for(i = 0; i < size; i++)
		printf("v[%d] = %d\n", i+1, v[i]);
}

int main(int argc, char* argv[]){
	srand(time(NULL));

   	int* v = set_vet_values(10);
   	printf("\n************VETOR************\n");
   	print_vet(v, 10);
   	
   	quick_sort(v, 0, 10);
   	printf("\n************VETOR ORDENADO************\n");
   	print_vet(v, 10);


   	free(v);
    return 0x00;

}