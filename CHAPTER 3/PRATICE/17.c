// WAP to check if the given number is a natural number

#include<stdio.h>
int main (){

    int number;

    printf("enter number :");
    scanf("%d",&number);

    if(number>=1){
        printf("it is a natural number");
    }
    else{
        printf("it is not a natural number");
    }

    return 0;
}