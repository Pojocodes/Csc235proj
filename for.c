
/*A code to  accept the names of 10 students
*/
#include <stdio.h>

int main() {
    int i;
    char name[1000];   //it creates a string that can contain 1000 characters
    for(i = 1; i <11; i++) { //loop to iterate 10 times
        scanf("%s", name);    //this  scans the user input
        printf("Enter your name:\n");
        printf(name);           // you print each names
        printf("\n");
        
    }

    return 0;
}