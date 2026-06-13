//                          STRINGS USING POINTERS

//eg 

//char *str = "hello world";   stores string in memory address in the assigned address is stored in the char pointer 'str'

// char *str = "hello world" (it can be reinitialized)

//char str[] = "hello world"; (canot be reinitilized)

//for EG

#include<stdio.h>
int main(){

    char *canchange = "hello world";
    puts(canchange);
    canchange = "helo";
    puts(canchange);

    return 0;
}


//where as in array u can not do that