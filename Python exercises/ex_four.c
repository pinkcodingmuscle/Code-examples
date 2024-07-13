#include <stdio.h>

#define MAXRANGE 100

int divisor(int d){
    for (int i = 2; i < MAXRANGE; i++){
        if (d % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

int main(){
    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);
    divisor(num1);


}