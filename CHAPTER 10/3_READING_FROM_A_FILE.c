//                                     READING FROM A FILE

//char ch;
//fscanf(fptr,"%c",&ch); fptr --> file pointer , %c --> file specifier , &ch --> address of variable

//eg

#include<stdio.h>
int main(){

    FILE *fptr;
    fptr = fopen("test.txt","r");

    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);

    fclose(fptr);

    return 0;
}