#include "heap_sort.h"

static void make_heap(int* v, int i, int f);


static void make_heap(int* v, int i, int f) {
	int aux = v[i];
	int filho = 2 * i + 1; /* calcula o primeiro filho de i*/

	while(filho <= f) { 
		if ( filho < f){
			if (v[filho] < v[filho+1])
				filho = filho + 1;
		}

		if( aux < v[filho] ) { /* filho maior que pai */
			v[i] = v[filho]; /* filho se torna pai */ 
			i = filho; /* i recebe a posição do novo pai */
			filho = 2 * i + 1; /* calcula novo filho */
		} else {
			filho = f + 1; /* filho excede o tamanho do vetor */
		}
	}
	v[i] = aux; /* Antigo pai ocupa o lugar o ultimo filho analisado */ 
}

void heap_sort(int* v, size_t size) {
	int i, aux;

	for ( i = (size - 1)/2; i >= 0; i-- ){
		make_heap(v, 0, size - 1);
	}

	for ( i = size - 1; i >= 1; i-- ) {
		aux = v[0]; /* Pegar maior elemento da heap e coloca */
		v[0] = v[i];/* na sua posicao correspondente */
		v[i] = aux; /* no array */
		make_heap(v, 0, i - 1); /* Organiza a heap */ 
	}

}