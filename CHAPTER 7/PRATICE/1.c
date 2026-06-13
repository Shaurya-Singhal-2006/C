#include<stdio.h>
int main(){

    int marks[4];

    printf("enter maths marks: ");
    scanf("%d",&marks[0]);

    printf("enter sst marks: ");
    scanf("%d",&marks[1]);

    printf("enter science marks: ");
    scanf("%d",&marks[2]);

    printf("enter IT marks: ");
    scanf("%d",&marks[3]);

    printf("maths:%d sst:%d science:%d IT:%d\n",marks[0],marks[1],marks[2],marks[3]);

    return 0;
}