// WAP to calsulte percentage of a student form marks in science math and sanskrit

#include<stdio.h>

float percentage(float a ,float b ,float c);

int main (){

    float a,b,c;

    percentage(a,b,c);

    return 0;
}

float percentage(float a ,float b ,float c){
    printf("enter the marks in science: ");
    scanf("%f",&a);

    printf("enter the marks in sanskrit: ");
    scanf("%f",&b);

    printf("enter the marks in math: ");
    scanf("%f",&c);

    float per = (a+b+c)/3;

    printf("percentage is: %.2f\n",per);

}