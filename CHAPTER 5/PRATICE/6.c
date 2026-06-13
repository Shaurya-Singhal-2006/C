//WAP to calculate area of a square, a circle and a rectangle

#include<stdio.h>

float squarearea(float a );
float circlearea(float a );
float rectanglearea(float a ,float b);

int main (){

    int a,b;

    squarearea(a);

    circlearea(a);

    rectanglearea(a,b);

    return 0;
}


float squarearea(float a){
    printf("enter length of one side: ");
    scanf("%f",&a);

    printf("the area of the square is: %.2f cm/sq\n",a*a);
}
float circlearea(float a){
    printf("enter radius of the circle: ");
    scanf("%f",&a);

    float pi = 3.14;

    printf("the area of the circle is: %.2f cm/sq\n",2*pi*a*a);
}
float rectanglearea(float a , float b){
    printf("enter length of rectangle: ");
    scanf("%f",&a);

    printf("enter breadth of rectangle: ");
    scanf("%f",&b);

    float area = a*b;

    printf("the area of the rectangle is: %.2f cm/sq\n",area);
}