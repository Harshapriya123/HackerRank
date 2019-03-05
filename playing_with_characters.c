#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c,str[256],sen[256];
    scanf("%c",&c);
    scanf("%s",str);
    scanf("\n");
    scanf("%[^\n]%*c",&sen);
    printf("%c",c);
    printf("\n%s",str);
    printf("\n%s",sen)
 return 0;
}
