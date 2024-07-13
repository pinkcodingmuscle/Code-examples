#include <stdio.h>

int countdown(int input){
    // Base case
    if (input <= 0){
        printf("Blast off!\n");
        return 0;
    }
    // computation
    printf("Countdown from...%d\n", input);
    return countdown(input-1);
}
int main(){
    countdown(6);
    return 0;
}