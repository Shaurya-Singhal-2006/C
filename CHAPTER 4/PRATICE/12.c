// print reverse of thr table for a number n 

#include<stdio.h>
int main(){

    int n;

    printf("enter number :");
    scanf("%d",&n);

    for(int i = 10 ; i>=1 ; i = i - 1 ){
        printf("%d \n",i*n);
    }

    return 0;
}