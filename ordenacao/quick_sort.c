#include "quick_sort.h"

int partition(int* v, int inicio, int fim) {
    int esq, dir, aux, pivo;

    esq = inicio;
    dir = fim;
    pivo = v[inicio];

    while ( esq < dir ) {
        while (v[esq] <= pivo)
            esq ++;
        while (v[dir] > pivo)
            dir --;

        if (esq < dir) {
            aux = v[esq];
            v[esq] = v[dir];
            v[dir] = aux;
        }
    }

    v[inicio] = v[dir];
    v[dir] = pivo;

    return dir;
}


void quick_sort(int* v, int inicio, int fim){

    if( inicio < fim ){
        int pivo = partition (v, inicio, fim);
        quick_sort (v, inicio, pivo - 1);
        quick_sort (v, pivo + 1, fim);
    }


}
