#include <stdio.h>
#include <time.h>


// ask for user name and age and let them know which year they will be 100
int main(){
char name [50];
printf("Enter your name: \n");
fgets(name, sizeof(name), stdin);
int age;
printf("How old are you?: \n");
scanf("%d", &age);

int year = (2024 - age) + 100;

printf("You will turn 100 in the year %d\n", year);
}
