#include <stdio.h>
#define MAXSIZE 11
int main(){
    
    int num [MAXSIZE] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    int new_list[MAXSIZE];
    int num2;
    printf("Please enter a number: ");
    scanf("%d", &num2);
    for (int i = 0; i < MAXSIZE; i++){
        if(num[i] < num2){
            new_list[i] = num[i];
            printf("%d ", new_list[i]);
        }
    }
    printf("\n");
return 0;
}