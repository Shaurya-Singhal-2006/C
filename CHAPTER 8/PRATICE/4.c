//make a program that inputs users name and prints its length

#include<stdio.h>
#include<string.h>

void length(char array[]){                            //function
    int count = 0; 
    for(int i = 0 ; array[i] != '\0' ; i++){
        count++;
    }
    printf("the lenght of the name is: %d\n",count);
}

int main(){

    char name[100];

    printf("enter your name: ");
    fgets(name , 100 , stdin);

    printf("the length of the name is: %d\n",strlen(name));
    length(name);

    return 0;
}