#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headers/func.h"

clock_t start, end;

int mergeSort(int size){
    //ToDo implement me!!
}

int main(void){

    int size = 500;

    start = clock();

    printf("Aqui foi\n");
    generateRandomArray(size);

    end = clock();

    printDuration(start, end);


    return 0;
}

/* gcc headers/func.o merge-sort.c -o merge-sort -ansi -pedantic -Wall */