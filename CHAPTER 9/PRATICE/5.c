//create a structure to store complex numbers (use arrow opeartors)

#include<stdio.h>

struct complex{
    int real;
    int ima;
};

int main(){

    struct complex n1 = { 5 , 8 };

    struct complex *ptr = &n1;

    printf("the real value is: %d and imaginary value is: %d\n",ptr->real,ptr->ima);

    return 0;
}