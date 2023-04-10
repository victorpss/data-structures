#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "func.h"

int* generateRandomArray(int size){
    int i;
    int *arr = (int*) malloc(size * sizeof(int));

    for(i=0; i<size; i++){
        arr[i] = rand() % size;
    }

    return arr;
}

int generateSortedArray(int size){
    int i;
    int *arr = (int*) malloc(size * sizeof(int));

    for(i=0; i<size; i++){
        arr[i] = i;
    }

    return *arr;
}

int generateUnsortedArray(int size){
    int i;
    int *arr = (int*) malloc(size * sizeof(int));

    for(i=0; i<size; i++){
        arr[i] = size-i-1;
    }

    return *arr;
}

void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void printDuration(clock_t start, clock_t end){
    printf("\nDuration: %.5f ms\n", ((double) (end-start)) / CLOCKS_PER_SEC * 1000);
}

void checkIfSorted(int* arr, int size){
    int i;

    for(i=0; i<size-1; i++){
        if(arr[i] > arr[i+1]){
            printf("This array is NOT sorted.\n");
            return;
        }
    }

    printf("This array is sorted.\n");
}
 /* gcc -c func.c -ansi -pedantic -Wall*/