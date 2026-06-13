// print the factorial of a number  n

#include<stdio.h>
int main(){

    int n;

    printf("enter number:");
    scanf("%d",&n);

    int fact = 1;

    for(int i = 1 ; i<= n ; i++){
        fact = fact*i;
    }

    printf("factorial of the number u entered is %d\n", fact);

    return 0;
}