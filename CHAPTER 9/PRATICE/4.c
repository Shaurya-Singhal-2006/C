//create a structure to store vectors then make a function to return sum of 2 vectors

#include<stdio.h>

struct vector{
    int x;
    int y;
};

void addition(struct vector v1 , struct vector v2 , struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v1.y;

    printf("sum of x is %d and sum of y is %d",sum.x,sum.y);
}

int main(){

    struct vector v1 = { 5 , 9 };
    struct vector v2 = { 11 , 17 };
    struct vector sum = {0};

    addition(v1,v2,sum);

    return 0;
}