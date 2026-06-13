//WAP to store the first N fibonacci numbers

#include<stdio.h>

int main(){

    int n;

    printf("enter the number of fibonacci series: ");
    scanf("%d",&n);

    int fibo[n];

    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2 ; i < n ; i++){         //IMPORTANT
        fibo[i] = fibo[i-2] + fibo[i-1];
        printf("%d ",fibo[i]);
    }

    return 0;
}
