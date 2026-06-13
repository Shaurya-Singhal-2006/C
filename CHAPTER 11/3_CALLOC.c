// CALLOC   continuous allocation

// initilizes with 0
 
//ptr = (int *)calloc(5 , sizeof(int)); 
//                    ^          ^
//      number of locations     size of per location

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr = (int*)calloc(5 , sizeof(int));

    return 0;
}