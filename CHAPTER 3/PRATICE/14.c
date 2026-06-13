// WAP to check if a student passed or failed 

#include<stdio.h>
int main(){

    int marks;

    printf("enter marks:");
    scanf("%d",&marks);
     
    if(marks<=100){
        marks >= 30 ? printf("PASS") : printf("FAIL");
    }
    else {
        printf("enter valid marks\n");
    }

    return 0;
} 