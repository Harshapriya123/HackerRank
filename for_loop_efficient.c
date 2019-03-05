#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a,b,i;
    scanf("%d\n%d", &a, &b);
static const char* strings[]={"one","two","three","four","five","six","seven","eight","nine"};
    for(i=a;i<=b;i++) //limit [a,b]
    {
        if(i<=9){printf("%s\n",strings[i-1]);}
        else if(i%2==0){printf("even\n");}
        else{printf("odd\n");}
    } 
    return 0;
}
