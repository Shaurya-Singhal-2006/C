// print the valuse of "i" from its pointer to pointer

#include<stdio.h>
int main(){

    int i = 10;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d",**pptr);

    return 0;
}