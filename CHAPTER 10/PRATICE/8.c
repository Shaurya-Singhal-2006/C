//2 numbers a and b are written in a file write a program to replace them with their sum

#include<stdio.h>
int main(){

    FILE *fptr;
    fptr = fopen("sum.txt","r");

    int a , b , sum;

    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);

    fclose(fptr);

    fptr = fopen("sum.txt","w");

    sum = a+b;

    fprintf(fptr , "the sum is: %d",sum);

    fclose(fptr);

    return 0;
}