/* A C program to count from 1 to N*/
#include <stdio.h>   

void main() {    //main program is void, so it returns nothing
    int num;  // the number the user wants to count to
    printf("enter the number you wish to count from");
    scanf("%d", &num);   // accepts the user input
    int i;
    for (i =1; i<=num; i++){
        printf("%d",i);
        printf("\n");
    }
}