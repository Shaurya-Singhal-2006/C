//WAP to calculate the perimeter of a rectangle take sides A & B from the user 

#include<stdio.h>
int main(){

    float A,B,perimeter;

    printf("enter length A:");
    scanf("%f",&A);

    printf("enter breadth B:");
    scanf("%f",&B);

    perimeter = 2*(A+B);

    printf("the perimeter of the rectangle is: %.2f cm \n",perimeter);

    return 0;
}