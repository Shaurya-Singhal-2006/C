//                                       ARRAYS

// collection of similar data types stored at contiguous memory location

//SYNTAX

// int marks[3]
// char name[10]
//float price[8]


// input output 

#include<stdio.h>
int main(){

    int array[];

    scanf("%d",&array[2]);       //for input

    printf("%d",array[5]);      //for output

    return 0;
}



//WAP TO ENTER PRICE OF 3 ITEMS AND PRINT THEIR FINAL COST WITH GST

#include<stdio.h>
int main(){

    float price[4];

    printf("enter the price of first item: ");
    scanf("%f",&price[0]);

    printf("enter the price of second item: ");
    scanf("%f",&price[1]);

    printf("enter the value of third item: ");
    scanf("%f",&price[2]);

    printf("price of first item: %.2f\nprice of second item: %.2f\nprice of third item: %.2f\n",price[0]+(0.18*price[0]),price[1]+(0.18*price[1]),price[2]+(0.18*price[2]));

    return 0;
}