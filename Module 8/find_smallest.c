#include <stdio.h>

void findSmallest(int arr [], int count){
    int smallest = arr[0];
    int smallest_indx = 0;

    for (int i = 0; i < count; i++){
        if (arr[i] <= smallest){
            int temp = arr[i];
            arr[i] = smallest;
            smallest = temp;
        }
        printf("%d\n", arr[i]);
    }
}

int main(){
    int arr [] = {5, 3, 6, 2, 10};
    findSmallest(arr, 5);
    return 0;
}