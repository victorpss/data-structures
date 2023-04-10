#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headers/func.h"

clock_t start, end;

/* Complexity: O(n^2) */
void selectionSort(int arr[], int size){
    int i, j;

    for(i=0; i<size-1; i++){
        for(j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main(void){

    int size = 100;
    int i;
    int *arr = generateRandomArray(size);

    start = clock();

    selectionSort(arr, size);

    end = clock();

    printDuration(start, end);
    checkIfSorted(arr, size);

    free(arr);

    return 0;
}

/* gcc headers/func.o selection-sort.c -o selection-sort -ansi -pedantic -Wall */