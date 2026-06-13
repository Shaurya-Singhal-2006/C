//checking a file if its exist or not 

#include<stdio.h>
int main(){

    FILE *fptr;
    fptr = fopen("test.txt","r");
    if(fptr == NULL){
        printf("the file does not exist");
    }
    else{
        fclose(fptr);
    }

    return 0;
}