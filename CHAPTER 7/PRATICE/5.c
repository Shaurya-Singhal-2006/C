//write a function to revrse an array

#include<stdio.h>
int main(){

    int size;

    printf("enter the size of array: ");   //taking size of array as input
    scanf("%d",&size);

    int array[size];

    for(int i = 0 ; i < size ; i++){        //loop to take value for the loop
        printf("enter the %d value: ",i+1);
        scanf("%d",&array[i]);
    }

    for(int i = 0 ; i < size/2 ; i++){    //loop to reverse the values of the array
        int temp = array[size - i -1];
        array[size - i - 1] = array[i];
        array[i] = temp;
    }

    for(int i = 0 ; i < size ; i++){    //loop to print all the values of the array
        printf("%d ",array[i]);
    }

    return 0;
}