#include<stdio.h>
int main(){

    int age = 21;
    int *ptr = &age;
    int _age = *ptr;

    printf("\n");

    printf("ADDRESS\n");

    printf("\n");
    
    printf("%p\n",&age);
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);

    return 0;
}