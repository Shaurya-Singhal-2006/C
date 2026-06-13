//check if a given character is present in a string or not

#include<stdio.h>
int main(){

    char string[100];
    char ch;

    printf("enter a string: ");
    fgets(string , 100 , stdin);

    printf("enter a character you want to check if its present in the string: ");
    scanf("%c",&ch);

    int result = 0;

    for(int i = 0 ; string[i] != '\0' ; i++){
        if(string[i] == ch){
            result = 1;
        }
    }

    if(result){
        printf("the character is present in the string");
    }
    else{
        printf("the character is not present in the string");
    }

    return 0;
}