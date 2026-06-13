//create a string firstname and lastname to store details of user and print all the characters using a loop

#include<stdio.h>

void output(char array[]){
    for(int i = 0 ; array[i] != '\0' ; i++){
        printf("%c",array[i]);
    }
    printf("\n");
}

int main(){

    char firstname[] = "SHAURYA";
    char lastname[] = "SINGHAL";

    output(firstname);
    output(lastname);

    return 0;
}