// 

#include<stdio.h>
int main (){

    int n , sum = 0;

    printf("enter the number:");
    scanf("%d",&n);

    for(int i = 1, j = n ; i <= n && j >=1 ; i++ , j-- ){
        sum = sum + 1;
        printf("%d \n",j);
    }
    printf("the sum is : %d", sum);

    return 0;
}