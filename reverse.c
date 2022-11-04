/* A code that reverses a sentence*/
#include <stdio.h>       // Enable me to use the standard input and output functions

int main(){             // where execution begns
    char userWord[1000], reversedWord[1000];  //create two strings that can contain 1000 characters
    int begin, end, count = 0;
    printf("input a string\n");
    scanf("%[^\n]%*c",userWord);       //ask the user to input a string
    while (userWord[count] != '\0' )   //count the number of words in the string
        count ++;
    end = count-1;             
    for (begin =0; begin <count; begin++){    //loop through the string to store the strings in reversedWord from last to the first
        reversedWord[begin] = userWord[end];               
        end --;
    }
    reversedWord[begin] = '\0';   
    printf("%s\n",reversedWord);
    return 0;   // terminate the code
}