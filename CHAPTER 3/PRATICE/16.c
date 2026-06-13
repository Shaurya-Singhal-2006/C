//WAP to find if a character entered by user is uper case or not

#include<stdio.h>
int main (){
  
    char character;

    printf("enter character:");
    scanf("%c",&character);
  
    if(character >= 'A' && character <= 'Z'){
        printf("the character entered is a upper case");
    }
    else if (character >= 'a' && character <= 'z'){
        printf("the character entred is a lower case");
    }
    else{
        printf("enter valid character");
    }

    return 0;
}