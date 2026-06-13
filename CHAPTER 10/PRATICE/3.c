//write in a file

#include<stdio.h>
int main(){

    FILE *fptr;
    fptr = fopen("test.txt","w");

    fputs("b",fptr);
    fputs("a",fptr);
    fputs("n",fptr);
    fputs("a",fptr);
    fputs("n",fptr);
    fputs("a",fptr);

    fclose(fptr);

    return 0;
}