//write a function to count the number of odd numbers in an array

#include<stdio.h>

void oddnumber(int arr[] , int n){
    int count = 0;
    for(int i = 0 ; i<n ; i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    printf("%d\n",count);
}

int main(){

    int array[]={1,2,3,6,8,10,5};
    oddnumber(array ,7);

    return 0;
}