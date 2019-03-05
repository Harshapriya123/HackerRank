#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int c = *a + *b; //the value of a and b is added     
    int d = abs(*b-*a); //the value of b and a is minused abs Returns the abosolute i.e positive value regardless of the operation performed 
    *a=c;  //Copy the result in c to *a i.e to a 
    *b =d; //Copy the result in d to *b i.e to b
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;// Address location of a is saved in *pa as the value and same for b 
    scanf("%d %d", &a, &b);//The value of variable a and b are read using scanf
    update(pa, pb);//function call 
    printf("%d\n%d", a, b);//print the updated values
    return 0;
}

