#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headers/func.h"

clock_t start, end;

/* Complexity: O(n log(n)) */
int quickSort(int size){
    //ToDo implement me!!
}

int main(void){

    int size = 500;
    int *arr = generateRandomArray(size);

    start = clock();

    //ToDo quickSort(arr, size){}

    end = clock();

    printDuration(start, end);
    checkIfSorted(arr, size);

    free(arr);

    return 0;
}

/* gcc headers/func.o quick-sort.c -o quick-sort -ansi -pedantic -Wall */