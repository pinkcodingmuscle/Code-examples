//Bubble sort of names stored in a file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    FILE *fp,*fp1; // fp - input file, fp1 - output file
    char name[10][200],temp[200]; // temp array used to store the character we are sorting
    int k=0,i,j,r;//k=keeps track of number of names present in the file, i = number of passes, j will
    // r stores result of string comparison

    // open file and put it in read mode
    fp=fopen("sort.txt", "r");
    if(fp==NULL){
        printf("\n Cannot read data from file\n");
        exit(1);
    }
    // take input from the file and store in name array
    printf("Contents of file are: \n");
    while(fscanf(fp, "%s", name[k])==1){
        printf("%s\n", name[k]);
        k++;
    }
    // bubble sort i,j loop
    //number of passes
    for(i=0;i<k-1;i++){
        // compare the adjacent elements
        for(j=0;j<k-1-i;j++){
            // this will return an int value
            // if r=0, both elements are the same, if r>0, 
            // if r<0
            r=strcmp(name[j], name[j+1]);
            if (r>0){
                // swapping
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }
    // place the contents from the name array to the seperate file
    fp1=fopen("Sorted text", "w");
    if(fp1==NULL){
        printf("\nFile cannot be opened\n");
    }
    printf("\nAfter Sorting: \n");
    for(i=0; i<k; i++){
        fprintf(fp1, "%s\n", name[i]);
        printf("%s\n", name[i]);
    }
    fclose(fp);
    fclose(fp1);
    
   
return 0;
}