// factorial of n

#include<stdio.h>

int fact(int n);

int main(){

    int n;

    printf("enter value: ");
    scanf("%d",&n);

    printf("%d",fact(n));

    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    int factorial = fact(n-1)*n;
    return factorial;
}