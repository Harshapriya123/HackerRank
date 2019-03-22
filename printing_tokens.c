#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    //strtok -splitting a string by some delimiter.
    char *token =strtok(s," "); // Returns first token 
    while(token != NULL){   //operation is performed till delimiter exists
    printf("%s\n",token); 
        token =strtok(NULL," ");  //Keep printing tokens while one of the delimiters present in s. 
    }
    return 0;
}
