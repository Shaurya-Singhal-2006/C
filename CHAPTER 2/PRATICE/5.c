//WAP to print the average of three numbers

#include<stdio.h>
 int main(){

    int a,b,c,answer;

    printf("enter the first number:");
    scanf("%d",&a);

    printf("enter the second number:");
    scanf("%d",&b);

    printf("enter the third number:");
    scanf("%d",&c);

    answer = a + b + c;

    printf("the average of three numbers is: %d \n", answer/3);

    return 0;
}