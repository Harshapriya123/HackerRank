#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
	
    int n,i,sum = 0,lastnum;
    scanf("%d", &n);
    while (n>0){
     lastnum = n%10; 
     n/= 10;//n =n/10
     sum +=lastnum;  //sum =sum +lastnum
    } 
      printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
How ?
% gives remainder
/ gives quotient
 n =10564

while(10564 > 0){    n%10             n/10           sum +lastnum
                     lastnum          n              sum
1st Iteration        10564%10         1056           0+4
                     4                                4
}
 while(1056 > 0){ 
                     lastnum          n              sum
2nd Iteration        1056%10         1056/10         4+6
                     6               105             10
}
while(105 >0) {
                     lastnum          n              sum
3rd Iteration        105%10         105/10           10+5
                     5               10              15
   }                   
while(10 >0) {
                     lastnum           n             sum
4th Iteration        10%10           10/10           15+0
                     0               1               15
}
while (1 > 0){
5th Iteration        lastnum          n              sum
                     1%10             1/10           15+1
                     1                0              16
             }            
