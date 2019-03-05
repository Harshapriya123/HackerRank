#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int a,b,sum,sub;
float c,d,floatsum,floatsub;	
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    sum = a+b;
    sub = a-b;
    floatsum = c+d;
    floatsub = c-d;
    printf("%d %d",sum,sub);
    printf("\n%.1f %.1f",floatsum,floatsub);
    return 0;
}
