// WAP to check if a number is odd or ever

#include<stdio.h>
 int main (){
     
    int a,answer;

    printf("enter number:");
    scanf("%d",&a);

    answer = a%2 == 0;

    printf("if the answer is 1 then the number is even\n");
    printf("if the answer is 0 then the number is odd\n");
    printf("%d",answer);

    return 0;
}