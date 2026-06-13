// WAP to calculate the area of a circle 

#include<stdio.h>
int main(){


    float pie,radius,area;
    pie = 3.14;

    printf("enter the radius of the circle in cm:");
    scanf("%f",&radius);

    area = pie*radius*radius;

    printf("the area of the circle is: %.2f cm square \n",area);

    return 0;
}

    