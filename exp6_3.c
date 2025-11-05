// 3. Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num
#include <stdio.h>
int fibo(int n);
int main (){
    int num;
    printf ( " enter the number ");
    scanf ("%d",&num );
    printf( "fbonacci series");
     for(int i = 0; i < num; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    
    return 0;
}

int fibo(int n) {
    
    if(n == 0) return 0;
    if(n == 1) return 1;
    
 
    return fibo(n-1) + fibo(n-2);
} 


