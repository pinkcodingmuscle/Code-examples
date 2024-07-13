#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort
void sortIntegers(int* array, size_t size){
    int i,j;
    for(i=0; i < size; ++i){
        for(j=0; j < size-1-i; j++){
            if(array[j] > array[j+1]){
                swap(&array[j],&array[j+1]);
            }
        }
    }
}

int main(){
    int array[] = {8,7,9,2,3,1,5,4,6};
    sortIntegers(array,9);
    printf("Sorted array: ");
    for(int i=0; i < 9; i++){
        printf("%d ",array[i]);
    }
    printf("\n");

    return 0;
}