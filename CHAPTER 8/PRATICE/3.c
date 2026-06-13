//ask user to enter there full name and print it back to them

#include<stdio.h>
int main(){

    char fullname[100];

    printf("enter your full name: ");
    gets(fullname);

    puts(fullname);

    return 0;
}