#include <stdio.h>

int count(int arr [], int n){
    int result = 0;
    int i;
    for (i = 0; i<n; i++){
        result++;   
    }
    printf("%d\n", result);
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    count(arr, n);

}