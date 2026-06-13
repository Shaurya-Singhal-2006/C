//     free

//we use it to free memory that is allocated using malloc and calloc

//eg   free(ptr)

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