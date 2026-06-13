//WAF to find sum of digits of a number

#include<stdio.h>

int sum(int a ,int b);

int main (){

    int a,b;

    printf("enter the first number: ");
    scanf("%d",&a);

    printf("enter the second number: ");
    scanf("%d",&b);

    printf("the sum is: %d",sum(a,b));

    return 0;

}

int sum(int a ,int b){
    return a+b;
}