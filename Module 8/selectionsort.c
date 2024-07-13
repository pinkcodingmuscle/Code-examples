#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define LIMIT 5
#define RAND_RANGE 100

int main(){
    int arr[LIMIT];
    int i, j, smallest_idx;
    //bool valid[LIMIT]; // array that indicates which input values are valid
    
    //seed random numbers
    srand(time(0));

    printf("Before sorting: \n");
    for (i = 0; i < LIMIT; i++){
        arr[i] = rand() % RAND_RANGE;
        printf("%d\n", arr[i]);
    }

    for (i=0 ; i<LIMIT; i++){

        smallest_idx = i;

        for(j=i+1; j<LIMIT; j++){
            if(arr[j] < arr[smallest_idx]){
                smallest_idx = j;
            }
        }
        printf("Swap # %d: %d swapped with %d\n", i, arr[i], arr[smallest_idx]);
        int temp = arr[i];
        arr[i] = arr[smallest_idx];
        arr[smallest_idx] = temp;
    }


    printf("After sorting: \n");
    for (int i = 0; i < LIMIT; i++){
        printf("%d\n", arr[i]);
    }


    return 0;
}
