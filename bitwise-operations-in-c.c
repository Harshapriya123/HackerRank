#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  //n =5 ,S={1,2,3,4,5}
  int ABor,ABand,ABxor,i,j,a,b;
  long long int A=0,B=0,C=0;
  for(i=1;i<=n;i++){
  a=i;
    for(j=i+1;j<=n;j++){ 
        b = j;
        ABand = a&b;
        ABor =a|b;
        ABxor = a^b;
        if(ABand < k && ABand >A)
          A = ABand;
        if(ABor < k && ABor > B)
          B = ABor;
        if(ABxor < k && ABxor >C)
          C = ABxor;
    }
  }
  printf("%lld\n%lld\n%lld\n",A,B,C);
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
