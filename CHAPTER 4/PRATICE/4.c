// print the numbers from 0  to n , if n is given by user

#include<stdio.h>
int main(){

    int i,n;

    i = 1;

    printf("enter number :");
    scanf("%d", &n);

    while (i <= n){
        printf("%d \n", i);
        i = i + 1;
    }

    return 0;
}