// use library function to calculate the square of a number given by the user

#include<stdio.h>
#include<math.h>

int main (){

    float n,answer;

    printf("enter a number: ");
    scanf("%f",&n);

    answer = pow(n,2);

    printf("the answer is: %.2f\n",answer);

    return 0;
}