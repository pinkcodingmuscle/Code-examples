#include <stdio.h>
// while loop to ask for valid user data
/*   
int main(){
    int number;
    while (1){
        printf("Enter a number between 0 and 100.\n");
        scanf("%d", &number);
        if (number >= 0 && number <100){
            break;
        }
        printf("Number out of range. Please try again");
    }
    printf("The number you entered is: %d\n", number);
    return 0;
}
*/

// basic while loop
int main(){
    int i;
    i = 0;
    while (i < 10){
        printf("%d ",i++);
        printf("\n");
    }

return 0;
}

