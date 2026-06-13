//take a string input from the user using %c

#include<stdio.h>
int main(){

    char str[100];
    char sh;

    int i = 0;

    while(sh != '\n'){
        scanf("%c",&sh);
        str[i] = sh;
        i++;
    }
    str[i] = '\0';
    puts(str);

    return 0;
}