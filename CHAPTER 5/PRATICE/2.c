// write a function that prints Namaste if user is indian and bonjour if the user is french

#include<stdio.h>

void indian();
void french ();

int main (){

    char n;

    printf("enter  i  for indian and  f  for french:");
    scanf("%c",&n);

    if(n == 'f' || n == 'i'){
        if(n == 'f'){
            french();
        }
         else{
            indian();
        }
    }
        else{
            printf("enter a valid character");
        }

    return 0;
}

void indian(){
    printf("NAMASTE\n");
}
void french(){
    printf("BONJOUR\n");
}