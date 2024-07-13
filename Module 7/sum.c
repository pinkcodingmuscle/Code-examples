#include <stdio.h>

int sum(int arr[], int n){
    if (n <= 0){
       return 0;
    }
    return arr[n-1] + sum(arr, n-1);
}

int main(){
    int num[] = {2,4,6};
    int n = sizeof(num)/sizeof(num[0]);
    int result =  sum(num, n);
    printf("The sum of the elements is %d\n", result);
    
    return 0;
}