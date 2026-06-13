#include<stdio.h>
int main(){

    int age = 21;
    int *ptr = &age;
    int _age = *ptr;

    printf("\n");

    printf("VALUE\n");

    printf("\n");
    
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));

    return 0;
}
