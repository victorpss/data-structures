#ifndef FUNC_H
#define FUNC_H
#include <time.h>  

int* generateRandomArray(int);

int generateSortedArray(int);

int generateUnsortedArray(int);

void swap(int*, int*);

void printDuration(clock_t, clock_t);

void checkIfSorted(int*, int);

#endif