#include<stdio.h>

void finalprice(float n);

int main(){

    float n;

    printf("enter the price: ");
    scanf("%f",&n);
  
    finalprice(n);
    
    return 0;
}

void finalprice(float n){
   float price = n+(n*0.18);
   printf("final price of the item is: %.2f\n",price); 
   printf("value is: %.2f\n",n);
}