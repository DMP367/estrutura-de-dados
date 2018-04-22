#include "counting_sort.h"
#include <string.h>

void counting_sort(int* v, size_t size) {
	int i;
    int largest;
    int *c;
    int *v2;

    v2 = malloc(sizeof(int)*size);
    memcpy(v2,v,sizeof(int)*size);


    largest = v2[0];
    for(i=0;i<size;i++){
        if(largest<v2[i])
            largest = v2[i];
	}

    c = calloc(largest+1,sizeof(int));
    for(i=0;i<size;i++){
        c[v2[i]]++;
    }

    for(i=1;i<=largest;i++){
        c[i] += c[i-1];
	}
    for(i=size-1;i>=0;i--){
        v[--c[v2[i]]] = v2[i];
    }
    free(c);
    free(v2);

} 