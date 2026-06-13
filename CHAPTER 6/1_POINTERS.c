//                                                                POINTERS

//pointers --> a variable that stores the memory address of another variable

//SYNATAX 

// int age = 22;
// int *ptr = &age;          (*) value of address  
// int _age = *ptr           (&) address 


#include<stdio.h>
int main (){

    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d",_age);

    return 0;
}

// DECLARING POINTERS 

//int *ptr;
// char *ptr;
// float *ptr;

// FORMAT SPECIFIER 

// %u denoted (unsigned int)

//printf("%p",&age);
//printf("%p",ptr);
//printf("%p",&ptr);

#include<stdio.h>
int main (){

    int *ptr;
    int  x;

   ptr = &x;
   *ptr = 0;

   printf("x = %d\n", x);
   printf("*ptr = %d\n", *ptr);

   *ptr += 5;

    printf("x = %d\n", x);
   printf("*ptr = %d\n", *ptr);

   (*ptr)++;

    printf("x = %d\n", x);
   printf("*ptr = %d\n", *ptr);

   return 0;
}