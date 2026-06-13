//                                                          INPUT


//                                                        [ SCANF ]

// if u want to input some commands then u have to use (scanf) data type 

// for eg 

#include <stdio.h>
int main(){
    int num;

    printf("please enter the number you want to display:");
    scanf( "%d", &num);                                       // (&)repesents the address 

    printf("the number u entered is: %d \n", num);

    return 0;
}