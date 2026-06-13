//                                     POINTER TO POINTER 

// a variable that stores the memory address of another pointer 

//SYNTAX 

//int **pptr 
//float **pptr
//char **pptr

#include<stdio.h>
int main(){

    int i = 10;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d",**pptr);

    return 0;
}

//EG

#include<stdio.h>
int main(){


    float price = 100.0;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("%f\n",price);
    printf("%f\n",*ptr);
    printf("%u\n",&price);
    printf("%f\n",**pptr);

    return 0;
}