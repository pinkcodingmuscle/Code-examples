#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# define NAME_LENGTH 60
typedef struct Person{
    char name[NAME_LENGTH];
    int age;
    float height;
}Person_T;


/*read the person details using scannf*/
void readData(int n, Person_T *p){
    for (int i = 0; i < n; i++){
        printf("Enter details for the employee %d:\n", i + 1);
        printf("Enter your name: ");
        scanf("%s", p[i].name);

        printf("How old are you?: ");
        scanf("%d", &p[i].age);

        printf("How tall are you? ");
        scanf("%f", &p[i].height);
        printf("\n");
        p++;
    }
}

/* function to display person's details*/
void display(int n, Person_T *p){
    printf("---------------PERSON'S DETAILS------------------\n");
    for (int i = 0; i < n; i++){
        printf("Name: %s\n", p[i].name);
        printf("Age: %d\n", p[i].age);
        printf("Height: %.2lf\n", p[i].height);
        printf("\n");
        p++;
    }
}
int main(){
    // declare variable of type person
    
    int n;
    // Enter number of people
    printf("Enter the number of people: \n");
    scanf("%d", &n);

    // allocate size for person object
    Person_T *p = (Person_T*)malloc(n*sizeof(Person_T));
    if (p != NULL){
        readData(n, p);
        display(n, p);
    }else{
        printf("memory allocation failed!\n");
    }

return 0;
}