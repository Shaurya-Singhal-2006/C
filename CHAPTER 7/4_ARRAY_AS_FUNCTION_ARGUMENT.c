//                        ARRAY AS FUNCTION ARGUMENT

//function declaration

//void printnumber (int arr[],int n)   here int n is for the size of the array
//                  OR
//void printnumber (int *arr,int n)    same here

// for eg

#include<stdio.h>

void printnumbers(int array[] , int n){
    for(int i = 0 ; i<n ; i++){
        printf("%d ",array[i]);
    }
}

int main (){

    int array[] = {1,2,3,4,5,6};
    printnumbers(array,4);           //here 6 denoted how many values of the array will be printed

    return 0;
}