// ask the user to enter their firstname and print it back to them 

#include<stdio.h>
int main(){

    char name[50];

    printf("enter your first name: ");
    scanf("%s",name);

    printf("your first name is: %s\n",name);

    return 0;
}