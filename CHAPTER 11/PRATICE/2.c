//WAP to allocate memory to store 5 prices

#include<stdio.h>
#include<stdlib.h>

int main(){

    float *price = (float*)malloc(5 * sizeof(float));

    for(int i = 0 ; i < 5 ; i++){
        printf("enter the price of %d item: ",i+1);
        scanf("%f",&price[i]);
    }

    printf("\n");

    for(int i = 0 ; i < 5 ; i++){
        printf("the price of %d value is %.2f\n",i+1,price[i]);
    }

    free(price);

    return 0;
}