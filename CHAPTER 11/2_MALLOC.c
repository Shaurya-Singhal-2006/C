// MALLOC()

//TAKES NUMBER OF BYTES TO BE ALLOCATED AND RETURN A POINTER OF TYPE VOID

// ptr = (int*)malloc(5* sizeof(int));
//         ^
//         type casting 

//sizeof(data type) --> return the data type size 

//eg int --> 4
// float --> 4
// character --> 1

//we have to include stdlib library to use DMA

//EG

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr = (int *)malloc(3 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;

    for(int i = 0 ; i < 3 ; i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}