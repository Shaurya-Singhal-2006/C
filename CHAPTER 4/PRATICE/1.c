// WAP to check if the given number is armstrong number or not 

#include<stdio.h>
int main(){

    int number;

    printf("enter a 3 digit number:");
    scanf("%d",&number);

    int last;
    int result = 0;
    int original = number;


    while(number != 0){
        last = number%10;
        result = result + (last*last*last);
        number = number/10;
    }

    if(original == result){
        printf("the number is palindrom");
    }
    else{
        printf("the number is not palindrom");
    }

    return 0;
}