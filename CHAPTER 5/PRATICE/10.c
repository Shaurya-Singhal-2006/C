// WAP to print n terms of the fibonacci sequence

#include<stdio.h>

int fibo(int n);

int main(){

    int n;

    printf("enter number n: ");
    scanf("%d",&n);

    printf("fib of %d is: %d\n",n,fibo(n));

    return 0;
}

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int fibo1 = fibo(n-1);
    int fibo2 = fibo(n-2);
    int fibonacci = fibo1 + fibo2;
    return fibonacci;
}