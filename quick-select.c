#include <stdio.h>
#include <stdlib.h>
#include "headers/func.h"

int partition(int array[], int start, int end){
    int i, j, temp;

    int pos = start + rand() % (end - start);
    int pivot = array[pos];

    array[pos] = array[start];
    array[start] = pivot;

    i = start + 1;
    j = end - 1;

    while(i<j){
        while(i < end && array[i] < pivot){
            i++;
        }

        while(j > start && array[j] >= pivot){
            j--;
        }

        if(i<j){
            swap(&array[i], &array[j]);
        }
    }

    array[start] = array[j];
    array[j] = pivot;

    return j; /* pivot's real position */

}

int quickSelect(int array[], int start, int end, int k){
    int posPivot;

    if (end-start == 1){
        return array[start];
    }

    posPivot = partition(array, start, end);

    if (posPivot == k){
        return array[k];
    }

    if (k < posPivot){
        return quickSelect(array, start, posPivot, k);
    }
    else{
        return quickSelect(array, posPivot, end, k);
    }

}


int main(int argc, char* argv[]){
    
    int arrayNumber;
    int elementsAmount = 0;
    int wantedElement;
    int k = atoi(argv[2]); /* k-th position = element[k-1]*/
    int* inputArray = (int*) malloc(sizeof(int) * 1);

    if(argc != 3){
        printf("Error. Use: ./[program] -k [number]");
        return 1;
    }

    while(scanf("%d", &arrayNumber) != EOF){ /* the user inputs each number of the array, ending with ^D */
            inputArray = realloc(inputArray, sizeof(int) * (elementsAmount + 1));
            inputArray[elementsAmount] = arrayNumber;
            elementsAmount++;
               
    }

    wantedElement = quickSelect(inputArray, 0, elementsAmount, k-1); /* if I want the k-th element, its position on array is [k-1].*/

    printf("%d", wantedElement);

    free(inputArray);

    return 0;
}

/* gcc headers/func.o quick-select.c -o quick-select -ansi -pedantic -Wall */