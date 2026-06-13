// WAP to check if a number is divisible by 2 or not 

#include<stdio.h>
int main (){

    int a , answer;

    printf("enter number:");
    scanf("%d", &a);

    answer = a%2 == 0;

    printf("if the answer is 0 then it is not divisible by 2 \n");
    printf("if the answer is 1 then it is divisible by 2 \n");
    printf("%d",answer);

    return 0;
}