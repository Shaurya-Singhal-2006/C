//create an array of size 5(using calloc) and enter its values rom the user

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr = (int*)calloc(5 , sizeof(int));

    for(int i = 0 ; i < 5 ; i++){
        printf("enter the %d value: ",i+1);
        scanf("%d",ptr[i]);
    }

    free(ptr);

    return 0;
}