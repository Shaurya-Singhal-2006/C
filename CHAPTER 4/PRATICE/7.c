// keep taking numbers as input from user untill user enters an odd number 

#include<stdio.h>
int main (){

    int n;

    do{
        printf("enter number:");
        scanf("%d",&n);
         if(n%2!=0){
            break;
         }
    }while(1);

    printf("\nenter even number");

    return 0;
}