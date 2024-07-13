#include <stdio.h>

int addition(double a, double b){
    double result = a + b;
    printf("Addition: %.2lf + %.2lf = %.2lf\n", a, b, result);
    return 0;
}

int subtraction(double a, double b){
    double result = a - b;
    printf("Addition: %.2lf - %.2lf = %.2lf\n", a, b, result);
    return 0;
}

int multiplication(double a, double b){
    double result = a * b;
    printf("Addition: %.2lf * %.2lf = %.2lf\n", a, b, result);
    return 0;
}

int division(double a, double b){
    if (b == 0){
        printf("Error! You cannot divide a number by zero\n");
    }
    else{
        double result = a / b;
        printf("Addition: %.2lf / %.2lf = %.2lf\n", a, b, result);
    }
    return 0;
}




int main(){
    double a, b;
    int choice;

    printf("\n");
    printf("--------Welcome to the simple calculator app!--------\n");
    
    printf("Choose an operation from the options below\n");

    printf("\n");
    printf("1 for Addition\n");
    printf("2 for Subtraction\n");
    printf("3 for Multiplication\n");
    printf("4 for Division\n");
    scanf("%d", &choice);

    printf("\n");
    printf("Enter a number: \n");
    scanf("%lf", &a);

    printf("Enter another number: \n");
    scanf("%lf", &b);


    switch (choice){
    case 1: 
        addition(a, b);
        break;
    
    case 2: 
        subtraction(a,b);
        break;
    
    case 3: 
        multiplication(a, b);
        break;
    
    case 4: 
        division(a,b);
        break;
    
    default: printf("Invalid option!\n");
        break;
    }
return 0;
}