/* A program that does simple quadratic equation */
#include <stdio.h>
#include <math.h>
int main(void){
    double a,b,c,root1,root2;  // create the varaibes
    printf(" Please enter a \n");
    scanf("%lf",&a);
    printf(" Please enter b \n");
    scanf("%lf",&b);
    printf(" Please enter c \n");
    scanf("%lf",&c);
    if ((b*b-4.*a*c) >=0){     // if the discriminant is positive, that means the roots could be found
        root1 = (-b + sqrt(b*b-4.*a*c)) / (2.*a);
        root2 = (-b - sqrt(b*b-4.*a*c)) / (2.*a);
        printf("\n First root is %lf ",root1);   // print the roots
        printf("\n Second root is %lf ",root2);
    }
    else{
        printf("\n Discriminant is negative! No roots!");   //if the discriminant is negative, that means it is a complex number
    }
    printf("\n ");
return 0;
}