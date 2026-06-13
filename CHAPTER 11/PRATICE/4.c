//allocate memory for 5 numbers . then dynamically increase it to 8 numbers

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr = (int*)calloc(5,sizeof(int));

    for(int i = 0 ; i < 5 ; i++){
        scanf("%d\n",ptr[i]);
    }

    ptr = realloc(ptr, 8 );

    free(ptr);

    return 0;
}