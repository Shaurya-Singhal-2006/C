// keep taking number as input from user untill user enters a number which is multiple of 7

#include<stdio.h>
int main (){

    int n ;

    do{
        printf("enter number:");
        scanf("%d",&n);
        if(n%7 == 0){
            break;
        }
    }while(1);

    printf("enter a number which is not a multiple of 7");

    return 0;
}
