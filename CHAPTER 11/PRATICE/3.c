//WAP  to allocate memory of size n , where n is entered byt he user

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("enter the size: ");
    scanf("%d",&n);

    int *ptr = (int*)calloc( n, sizeof(int));

    for(int i = 0 ; i < n ; i++){
        printf("%d ",ptr[i]);
    } 

    free(ptr);

    return 0;
}