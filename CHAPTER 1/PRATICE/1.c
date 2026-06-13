// sum of two numbers 

#include <stdio.h>
int main (){
    int num1 , num2 , sum ;

    printf("enter the first number you want to add:");
    scanf("%d", &num1);

    printf("enter the second number you want to add:");
    scanf("%d", &num2);

    sum = num1 + num2 ;

    printf("sum of %d and %d is: %d \n", num1 , num2 , sum ); 
       
 //    we can also write         printf("sum of %d and %d is: %d \n", num1 , num2 , num1 + num2 );                             

    return 0;
}