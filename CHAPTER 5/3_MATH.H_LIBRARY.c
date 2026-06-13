//                                           MATH.H

// MATH.H LIBRARY HAVE MANY USEFULL FUNCTIONS FROM SOLVING MATHS EQUATIONS

#include<stdio.h>
#include<math.h>

int main (){

    float n,answer;

    printf("enter a number: ");
    scanf("%f",&n);

    answer = pow(n,2);                     //pow = (power)

    printf("the answer is: %.2f\n",answer);

    return 0;
}