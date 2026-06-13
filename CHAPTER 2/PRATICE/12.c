// WAP to check if given character is digit or not 

#include<stdio.h>
 int main (){

    int a,answer;

    printf("\nenter:");
    scanf("%d",&a);

    answer = 0<a;

    printf("if the answer is 1 then the number is true\n");
    printf("if the answer is 0 then the number is false\n");
    printf("%d",answer);

    return 0;
}