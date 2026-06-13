//make a structure to store bank account information of a customer of ABC bank also make alise for it

#include<stdio.h>

typedef struct information{
    char name[100];
    int acc;
} info;

int main(){

    info ac1 = {"shaurya" , 590023883 };
    info ac2 = {"raghav" ,  0753804698};

    return 0;
}