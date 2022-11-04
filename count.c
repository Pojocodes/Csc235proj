#include <stdio.h>

void main() {
    int num;
    printf("enter the number you wish to count from");
    scanf("%d", &num);
    int i;
    for (i =1; i<=num; i++){
        printf("%d",i);
        printf("\n");
    }
}