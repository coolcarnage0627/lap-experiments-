// 1. Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages
#include <stdio.h>
unsigned int factorial( unsigned int number){
    if (number ==0 || number ==1){
        return 1;

    }
   

    return number * (number - 1);

}
int main(){
   unsigned  int n;
    printf(" enter the number to find factorial of the number \n");
    scanf("%d", &n );
    printf("factorial of %d is %d \n", n, factorial(n));
    return 0;


}